#include<iostream>
#include<cmath>//ʹ����sqrt��ƽ�������� 
using namespace std;
class Shape{
	public:
		virtual double area()=0;//������һ�����麯��������������
		//�麯����Ϊ��ʵ�ֺ�������,ֻ�������˶���ʱ���ܵ���	
};

const double pi=3.1415926;//Բ���� 

class Circle:public Shape{//Բ 
	private:
		double radius;
	public:
		Circle(double radius)
		{
			this->radius=radius;    //ʹ��thisʱû�е���˵�����캯����д���� 
		}
		double area()
		{
			return pi*radius*radius;
		}
};

class Square:public Shape{//������ 
	private:
		double a;
	public:
		Square(double a)
		{
			this->a=a; 
		}
	double area()
	{
		return a*a;
	}
};

class Rectangle:public Shape{//������ 
	private:
		double b;
		double c;
	public:
		Rectangle(double b,double c)
		{
			this->b=b;
			this->c=c;
		}
		double area()
		{
			return b*c;
		}
};

class Trapezoid:public Shape{//���� 
	private:
		double a;//�ϵ�
		double b;//�µ�
		double h;//��
	public:
		Trapezoid(double a,double b,double h)
		{
			this->a=a;
			this->b=b;
			this->h=h;
		 } 
		double area()
		{
			return (a+b)*h*0.5;
		}
};

class Triangle:public Shape{//������ 
	private:
		double a;
		double b;
		double c;
	public:
		Triangle(double a,double b,double c)
		{
			this->a=a,this->b=b,this->c=c;
		 } 
		double area()
		{
			double p=(a+b+c)*0.5;//���׹�ʽ 
			return sqrt(p*(p-a)*(p-b)*(p-c));
		}
		
};

int main()
{
	Shape *point[5];//����ָ������ 
	Circle circle(10.2);
	Square square(3);
	Rectangle rectangle(3,4);
	Trapezoid trapezoid(2.0,4.5,3);
	Triangle triangle(4,5,6);
	
	point[0]=&circle;
	point[1]=&square;
	point[2]=&rectangle;
	point[3]=&trapezoid;
	point[4]=&triangle;
	
	char *name[5];//ʹ���ַ�����ʼ��ָ�룬ָ��ָ������ĸ��ַ 
	name[0]="circle";
	name[1]="square";
	name[2]="rectangle";
	name[3]="trapezoid";
	name[4]="triangle";
	
	cout<<"���ͼ�����Ϊ��"<<endl; 
	double sum=0;//����ͼ����� 
	
	for(int i=0;i<5;i++)
	{
		cout<<i+1<<"��"<<name[i]<<"�� "<<point[i]->area()<<endl;
		sum+=point[i]->area();
	}
	cout<<endl;
	cout<<"����ͼ�������Ϊ��"<<sum<<endl;
	system("pause");
	return 0;
}














