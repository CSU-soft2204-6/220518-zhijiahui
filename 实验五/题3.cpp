#include<iostream>
using namespace std;
class zhuti
{
	private:
		double len;
		double wid;
		double hei;
	public:
		setzhuti()
		{
			double l,w,h;
			cin>>l>>w>>h;
			len=l;
			wid=w;
			hei=h;	
		}
		volume()
		{
			double v;
			v=len*wid*hei;
			return v;	
		}
};
int main()
{
	zhuti z[3];
	cout<<"�����һ����������" ;
	z[0].setzhuti();
	cout<<endl;
	cout<<"����ڶ�����������" ;
	z[1].setzhuti();
	cout<<endl;
	cout<<"�����������������" ;
	z[2].setzhuti();
	cout<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"��"<<i+1<<"�����Ϊ��"<<z[i].volume()<<endl;
	}
	system("pause");
	return 0;
}









