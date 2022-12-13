#include<iostream>
using namespace std;
class Complex{
	private:
		double real;
		double image;
	public:
		Complex(double real,double image)
		{
			this->real=real,this->image=image;
		}
		void display()
		{
			cout<<"("<<real<<","<<image<<")"<<endl;
		}
		Complex operator = (Complex B)
		{
			this->real=B.real;
			this->image=B.image;
		}
		
};
class PComplex{
	private:
		Complex * PC;
	public:
		PComplex(Complex * PC=NULL)
		{
			this->PC=PC;
		}
		Complex * operator->()
		{
			static Complex NULLComplex(0,0);
			if(PC==NULL)
			{
				return &NULLComplex;
			}
			return PC;
		}
};
int main()
{
	PComplex P1;
	P1->display();
	Complex C1(100,200);
	P1=&C1;
	P1->display();
	system("pause");
	Complex C2=C1;
	C2.display();
	
	return 0;
}


















