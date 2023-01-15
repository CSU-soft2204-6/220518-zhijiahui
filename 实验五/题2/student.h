
//student.h
#include<string>
#include<iostream>
using namespace std;
class Student
{
	private:
		int num;
		string name;
		char sex;
	public:
		void display();
		Student(int num,string name,char sex)
		{
			this->num=num;
			this->name=name;
			this->sex=sex;
		}
	
};

