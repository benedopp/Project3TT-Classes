#pragma once
#include <string>
using namespace std;

class Student
{
public:
	string name;
	int age;
	char grade;
	string major;
	string sex;
	string course;
	Student();
	Student(string);
	Student(string, int);
	Student(string, int, char);
	~Student();

};


Student::Student()
{

}

Student::Student(string newName)
{

	name = newName;

}

Student::Student(string newName, int newAge)
{

	name = newName;
	age = newAge;
}

Student::Student(string newName, int newAge, char newGrade)
{
	name = newName;
	age = newAge;
	grade = newGrade;
}

Student::~Student()
{
}

