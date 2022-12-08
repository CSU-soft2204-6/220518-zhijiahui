#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10],s=0;
	cout<<"Enter ten numbers:";
	int i=0;
	int j=0;
	for(int k=0;k<10;k++)
	{
		cin>>b[k];
	}
	for(i=0;i<10;i++)
	{
		if(i==0)
		{
			a[0]=b[i];
			s++;
		}         
		else
		{
			for(j=0;j<=s;j++)
			{
			    if(a[j]==b[i]) break;
			}
			if(j>s)
			{
			   a[s]=b[i];
			   s++;
			} 
		}
	}
	cout<<"The distinct numbers are:";
	for(i=0;i<s;i++)
	{
		cout<<a[i]<<' ';
	} 
	cout<<endl;
	system("pause");
	return 0;
}

