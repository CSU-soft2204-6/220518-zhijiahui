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
	cout<<"输入第一个长方柱：" ;
	z[0].setzhuti();
	cout<<endl;
	cout<<"输入第二个长方柱：" ;
	z[1].setzhuti();
	cout<<endl;
	cout<<"输入第三个长方柱：" ;
	z[2].setzhuti();
	cout<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"第"<<i+1<<"个体积为："<<z[i].volume()<<endl;
	}
	system("pause");
	return 0;
}









