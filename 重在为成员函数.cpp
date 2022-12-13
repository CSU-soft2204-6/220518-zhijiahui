#include<iostream>
using namespace std;
class Complex{
	private:
		double real;
		double image;
	public:
		Complex(double real,double image)
		{
			this->real=real;
			this->image=image;
		}
		void display()
		{
			cout<<"("<<real<<","<<image<<")"<<endl;
		}
		Complex operator + (Complex B)//加法 
		{
			return Complex(real+B.real,image+B.image);
		}
		Complex operator - (Complex B);//减法 
		Complex operator - ();//取负 没有参数 
		Complex operator ++ ();//前置自加 没有参数
		Complex operator -- ();//前置自减 没有参数
		Complex operator ++ (int);//后置自加 只有int 
		Complex operator -- (int);//后置自减 只有int 
};

Complex Complex::operator - (Complex B)//减法 
{
	return Complex(real-B.real,image-B.image);
 } 
Complex Complex::operator - ()//取负
{
	return Complex(-real,-image);
}
Complex Complex::operator ++ ()//前置自加 
{
	return Complex(++real,image);
}
Complex Complex::operator -- ()//前置自减  
{
	return Complex(real--,image);
}
Complex Complex::operator ++(int)//后置自加  
{
	return Complex(real++,image);
}
Complex Complex::operator --(int)//后置自减 在类外定义要用域作用符 
{
	return Complex(real--,image);
}

int main()
{
	Complex A(100.0,200.0),B(-10.0,20.0),C(0,0);
	cout<<"A=", A.display();
	cout<<"B=", B.display();
	C=A+B;
	cout<<"C=A+B=",C.display();
	C=A-B;
	cout<<"C=A-B=",C.display();
	C=-A+B;
	cout<<"C=-A+B=",C.display();
	C=A++;
	cout<<"C=A++=",C.display();
	A.display();
	C=++A;
	cout<<"C=++A=",C.display();
	//C=A+5;
	//C.display();
	system("pause");
	return 0;
}










