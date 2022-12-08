#include<iostream>
using namespace std;
int parseHex(char *a);
int main()
{
	char hexString[10];
	cout<<"输入16进制："; 
	cin>>hexString;
	cout<<"转换成10进制:"<<parseHex(hexString)<<endl;
	system("pause");
	return 0;
 } 
 int parseHex(char *a)
 {
 	int r;
 	int i;
 	for(i=0;a[i]!='\0';i++)
 	{
 		if(a[i]<='9'&&a[i]>='0')
 		{
 			r=r*16+a[i]-'0'; 
		 }
		else if(a[i]<='f'&&a[i]>='a')
		{
			r=r*16+a[i]-'a'+10; 
		}
		else if(a[i]<='F'&&a[i]>='A')
		{
			r=r*16+a[i]-'A'+10; 
		}
 		
	 }
	 return r;
 }

