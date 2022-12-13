#include<iostream>
using namespace std;
class Complex{
	private:
		double real;
		double image;
	public:
		Complex()
		{
			real=0;
			image=0;
		}
		Complex(double real,double image)
		{
			this->real=real;
			this->image=image;
		}
		void display()
		{
			cout<<"("<<this->real<<","<<this->image<<")"<<endl;
		}
		friend Complex operator + (Complex A,Complex B)
		{
			return Complex(A.real+B.real,A.image+B.image);
		}
		Complex operator - (Complex B);//若定义为类成员函数，则只有一个形参 
};
Complex Complex::operator - (Complex B)
		{
			return Complex(real-B.real,image-B.image);
		}
int main()
{
	Complex C1(1.0,1.0);
	C1.display();
	Complex C2(2.0,2.0);
	C2.display();
	Complex C3=C1+C2;
	C3.display();
	
	Complex C4=C1-C2;
	C4.display();
	system("pause");
	return 0;
}


















