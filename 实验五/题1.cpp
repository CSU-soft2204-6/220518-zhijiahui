#include<iostream>
using namespace std;
class Time
{
	private://����ָ��Ϊ˽�� 
		int hour;
		int minute;
		int sec;
	public://��������������ָ��Ϊ���� 
		setTime()
		{
			int h,m,s;
			cout<<"����ʱ��:"<<endl;
			cin>>h>>m>>s; 
			hour=h;
			minute=m;
			sec=s;
		}
		showTime()
		{
			cout<<hour<<":"<<minute<<":"<<sec<<endl;
		}
 } ;
 int main()
 {
 	Time t1;
 	t1.setTime();
 	t1.showTime();
 	system("pause");
 	return 0;
 }
 
 
 
 
 
 
 
 
 
