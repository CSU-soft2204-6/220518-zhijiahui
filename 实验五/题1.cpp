#include<iostream>
using namespace std;
class Time
{
	private://属性指定为私有 
		int hour;
		int minute;
		int sec;
	public://函数（方法）可指定为公有 
		setTime()
		{
			int h,m,s;
			cout<<"输入时间:"<<endl;
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
 
 
 
 
 
 
 
 
 
