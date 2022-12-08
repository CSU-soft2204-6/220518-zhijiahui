#include<iostream>
using namespace std;
void swap(double a[],int n);
int main()
{
	double a[10];
	int listsize;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	listsize=sizeof(a)/sizeof(double);//数组传参，函数内不能使用sizeof() 
	swap(a,listsize);
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<' ';
	}
	system("pause");
	return 0;
}
void swap(double a[],int listsize)
{
	int t;

	for(int i=0;i<listsize-1;i++)
	{
		for(int j=0;j<listsize-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		} 
	}
}
