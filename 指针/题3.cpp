#include<iostream>
using namespace std;
void sort(int *p,int m);
int main()
{
	int m;
	int *p;
	cout<<"输入元素个数：";
	cin>>m;
	p=new int [m];
	for(int i=0;i<m;i++)
	{
		cin>>p[i];
	}
	sort(p,m);
	for(int i=0;i<m;i++)
	{
		cout<<p[i]<<' ';
	}
	cout<<endl;
	delete[] p;
	system("pause");
	return 0;
}
void sort(int *a,int m)
{
	for(int i=0;i<m-1;i++)
	{
		for(int j=i+1;j<m;j++)
		{
			if(a[i]>a[j])
			{
				int t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}









