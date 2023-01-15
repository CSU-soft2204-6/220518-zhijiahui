#include<iostream>
#include<cmath>//使用了sqrt求平方根函数 
using namespace std;
class Shape{
	public:
		virtual double area()=0;//定义了一个纯虚函数，产生抽象类
		//虚函数是为了实现函数重载,只有在有了对象时才能调用	
};

const double pi=3.1415926;//圆周率 

class Circle:public Shape{//圆 
	private:
		double radius;
	public:
		Circle(double radius)
		{
			this->radius=radius;    //使用this时没有弹框说明构造函数名写错了 
		}
		double area()
		{
			return pi*radius*radius;
		}
};

class Square:public Shape{//正方形 
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

class Rectangle:public Shape{//长方形 
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

class Trapezoid:public Shape{//梯形 
	private:
		double a;//上底
		double b;//下底
		double h;//高
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

class Triangle:public Shape{//三角形 
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
			double p=(a+b+c)*0.5;//海伦公式 
			return sqrt(p*(p-a)*(p-b)*(p-c));
		}
		
};

int main()
{
	Shape *point[5];//对象指针数组 
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
	
	char *name[5];//使用字符串初始化指针，指针指向首字母地址 
	name[0]="circle";
	name[1]="square";
	name[2]="rectangle";
	name[3]="trapezoid";
	name[4]="triangle";
	
	cout<<"求得图形面积为："<<endl; 
	double sum=0;//面积和计数器 
	
	for(int i=0;i<5;i++)
	{
		cout<<i+1<<"、"<<name[i]<<"： "<<point[i]->area()<<endl;
		sum+=point[i]->area();
	}
	cout<<endl;
	cout<<"所有图形面积和为："<<sum<<endl;
	system("pause");
	return 0;
}














