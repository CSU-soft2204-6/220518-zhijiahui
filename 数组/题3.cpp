#include<iostream>
using namespace std;
int main()
{
	bool L[100]={0};//0�������رգ�1����� 
	int n=0;//n��������+1 
	for(int s=1;s<=100;s++)//sΪѧ�������������� 
	{
		if(s==1)
		{
			for(int j=0;j<100;j++)
			{
				L[j]=!L[j];
			}
		}//��һ��ѧ�������й��Ӵ�
		else
		{
			for(int j=s-1;j<100;j++)
			{
				if(j==s-1)
				{
					L[j]=!L[j];//�ı��һ����Ӧ���ֹ��ӵ�״̬ 
				}
				else
				{
				    if(n==s+1){ 
					    L[j]=!L[j];
					    n=1;
				    }
				}
				n++;//������ǰ�ı�Ĺ��� 
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
