//main.cpp
#include<iostream>
#include"student.cpp"//已含有 student.h
//不能include"student.h",否则会引起重复报错 
using namespace std;
int main()
{
	
	Student stud1(007,"tcg",'m');
	stud1.display();
	system("pause");
	return 0;
 } 
