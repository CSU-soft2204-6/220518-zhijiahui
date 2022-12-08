#include<iostream>
using namespace std;
int main()
{
	bool L[100]={0};//0代表储物柜关闭，1代表打开 
	int n=0;//n代表间隔数+1 
	for(int s=1;s<=100;s++)//s为学生，即操作轮数 
	{
		if(s==1)
		{
			for(int j=0;j<100;j++)
			{
				L[j]=!L[j];
			}
		}//第一个学生将所有柜子打开
		else
		{
			for(int j=s-1;j<100;j++)
			{
				if(j==s-1)
				{
					L[j]=!L[j];//改变第一个对应数字柜子的状态 
				}
				else
				{
				    if(n==s+1){ 
					    L[j]=!L[j];
					    n=1;
				    }
				}
				n++;//计数当前改变的柜子 
			}
		}
	}
	for(int i=0;i<100;i++)
	{
		if(L[i]==1)
		{
			cout<<i+1<<" ";
		}
	}
	cout<<endl;
	system("pause");
	return 0;
}
