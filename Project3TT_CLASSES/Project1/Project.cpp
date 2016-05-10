#include <iostream>
#include "Student.h"

	void readingInitialValuesExample();
	void changingPublicValuesExample();
	void changingPrivateValuesExample();
	void pressEnter();


	Student ethan;
	Student kat		= Student("Kat");
	Student steven	= Student("Steven", 18);
	Student wilson	= Student("Wilson", 18, 'A');
int main()
{



	cout << "Welcome to custom classes demonstration.";
	pressEnter();
	
	readingInitialValuesExample();
	changingPublicValuesExample();
	changingPrivateValuesExample();




	return 0;
}

void readingInitialValuesExample()
{
	cout << "Here is the Information on your current Students" << endl;

	//We did not enter anything for Ethan :(

	//Here is what we entered for Kat.
	cout << "\tName: " + kat.name << endl << endl;

	//Here is what we entered for steven
	cout << "\tName: " + steven.name << endl;
	cout << "\t\t*Age: " << steven.age << endl << endl;

	//Here is what we entered for wilson
	cout << "\tName: " + wilson.name << endl;
	cout << "\t\t*Age: " << wilson.age << endl;
	cout << "\t\t*Grade: " << wilson.getGrade() << endl;

	pressEnter();
}

void changingPublicValuesExample()
{
	cout << "Remember our ethan object? Let's give it some values." << endl;
	cout << "Enter a name for the ethan object:";

	cin >> ethan.name;
	cin.ignore();

	cout << "Ok! now our ethan object is now named " << ethan.name << " :)" << endl;

	pressEnter();

	cout << "Now what is " << ethan.name << "'s age?" << endl;
	cout << "Age:";

	cin >> ethan.age;
	cin.ignore();

	cout << "Ok, got it! " << ethan.name << "'s age is " << ethan.age << "!" << endl;

	pressEnter();

}

void changingPrivateValuesExample()
{
	cout << "Now what is " << ethan.name << "'s grade? (We need a setter for this one..)" << endl;
	cout << "Grade:";

	//Let's create a temporary char variable to hold the entered value
	char tempGrade;

	cin >> tempGrade;
	ethan.setGrade(tempGrade);
	cin.ignore();

	cout << "Ok, sweet it's decided! " << ethan.name << "'s grade is " << ethan.getGrade() << "!" << endl;

	pressEnter();
}


void pressEnter()
{

	cout << "\n\n\t\t\t[Press Enter To Continue]";
	cin.ignore();
	cout << "\n";
}