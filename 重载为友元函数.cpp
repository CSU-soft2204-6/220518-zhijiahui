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
		friend Complex operator + (Complex A,Complex B)//�ӷ� 
		{
			return Complex(A.real+B.real,A.image+B.image);
		}
		friend Complex operator - (Complex A,Complex B);//���� 
		friend Complex operator - (Complex A);//ȡ�� 
		friend Complex operator ++ (Complex &A);//ǰ���Լ� 
		friend Complex operator -- (Complex &A);//ǰ���Լ� 
		friend Complex operator ++ (Complex &A,int);//�����Լ� 
		friend Complex operator -- (Complex &A,int);//�����Լ� 
};
Complex operator - (Complex A,Complex B)//���� 
{
	return Complex(A.real-B.real,A.image-B.image);
 } 
Complex operator - (Complex A)//ȡ��
{
	return Complex(-A.real,-A.image);
}
Complex operator ++ (Complex &A)//ǰ���Լ� Ҫ������ 
{
	return Complex(++A.real,A.image);
}
Complex operator -- (Complex &A)//ǰ���Լ� Ҫ������ 
{
	return Complex(A.real--,A.image);
}
Complex operator ++(Complex &A,int)//�����Լ� Ҫ������ 
{
	return Complex(A.real++,A.image);
}
Complex operator --(Complex &A,int)//�����Լ� Ҫ������ 
{
	return Complex(A.real--,A.image);
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










