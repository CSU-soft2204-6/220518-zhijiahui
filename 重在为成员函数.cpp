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
		Complex operator + (Complex B)//�ӷ� 
		{
			return Complex(real+B.real,image+B.image);
		}
		Complex operator - (Complex B);//���� 
		Complex operator - ();//ȡ�� û�в��� 
		Complex operator ++ ();//ǰ���Լ� û�в���
		Complex operator -- ();//ǰ���Լ� û�в���
		Complex operator ++ (int);//�����Լ� ֻ��int 
		Complex operator -- (int);//�����Լ� ֻ��int 
};

Complex Complex::operator - (Complex B)//���� 
{
	return Complex(real-B.real,image-B.image);
 } 
Complex Complex::operator - ()//ȡ��
{
	return Complex(-real,-image);
}
Complex Complex::operator ++ ()//ǰ���Լ� 
{
	return Complex(++real,image);
}
Complex Complex::operator -- ()//ǰ���Լ�  
{
	return Complex(real--,image);
}
Complex Complex::operator ++(int)//�����Լ�  
{
	return Complex(real++,image);
}
Complex Complex::operator --(int)//�����Լ� �����ⶨ��Ҫ�������÷� 
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










