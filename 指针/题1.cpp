#include<iostream>
using namespace std;
int indexOf(char *a,char *b); 
int main()
{
	char a[100],b[100];
	cout<<"Enter the first string:";
	cin.getline(a,100);
	cout<<"Enter the second string:";
	cin.getline(b,100);
	cout<<"indexOf("<<a<<","<<b<<") is"<<endl;
	if(indexOf(a,b)==-1)
	{
		cout<<-1<<endl;
	}
	else cout<<indexOf(a,b)+1<<endl;
	system("pause");
	return 0;
}
int indexOf(char *a,char *b)
{
	int i,j,k,r=-1,s=0;
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==' ') s++;
		for(j=i,k=0;b[j]!='\0'&&a[k]==b[j];j++,k++);
		if(a[k]=='\0')
			{
				r=i-s;
			}
	}
	
	return r;
}
