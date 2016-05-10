#pragma once
#include <string>		//Including the std::string class
using namespace std;	//using the std: namespace

// Declaring your custom class

/////////////////////////////////////////////////////////
//
//NAME:	Student
//
//DESCRIPTION: A custom defined class with variables, constructers
//			   and functions.
//
//
////////////////////////////////////////////////////////
class Student
{

// "public:" indicates the following variables and functions are public
// public variables and functions are accessible outside of the class
public:
	string name;		//string variable to store the student's name
	int age;			//int variable to store the student's name

	//Our Overloaded Constructors
	Student();
	Student(string newName);
	Student(string newName, int newAge);
	Student(string newName, int newAge, char newGrade);

	//Public Getter function to allow the user to see private information
	char getGrade();

	//Public Setter functions
	void setGrade(char newGrade);

	//Our Deconstructor
	~Student();

	// "private:" indicates the following variables and functions are private
	// private variables and functions are accessible ONLY inside of the class
private:
	char grade;
	string sex;

	//A Private function
	char validGradesOnly(char newGrade);
	


	// "protected:" indicates the following variables and functions are protected
	// protected variables and functions are accessible inside this class, and those
	// who inherit this class
protected:
	string major;
	string course;
};

/////////////////////////////////////////////////////////
//
//NAME:	Student()
//
//DESCRIPTION: A default constructor that is called
//			   and functions.
//
//
////////////////////////////////////////////////////////
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

char Student::getGrade()
{
	return grade;
}

void Student::setGrade(char newGrade)
{
	grade = validGradesOnly(newGrade);
}

char Student::validGradesOnly(char newGrade)
{
	if (newGrade == 'A' || newGrade == 'a')
		return 'A';
	else
	{
		cout << "Message From Student::validGradesOnly() [private]:"
			<< "since " << name << " didn't get an A, it must be an F!" << endl;
		return 'F';
	}
}

Student::~Student()
{
}

