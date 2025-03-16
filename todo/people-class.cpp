// people-class.cpp
// simple example of creating a class Circle

#include <iostream>
#include <string>
#include "People.h"
using namespace std;

int Student::numberOfStudents = 0;

Student::Student()
{
	int id = 0;
	string name = "null";
	string grade = "null";
	numberOfStudents++;
};

Student::Student(int id, string name, string grade)
{
	this->id = id;
	this->name = name;
	this->grade = grade;
	numberOfStudents++;
};

int Student::getNumberOfStudents()
{
	return numberOfStudents;
}


int main()
{
	Student s1;
	Student s2;

	cout << "Your number is: " << Student::getNumberOfStudents() << endl;


	Student s3;

	cout << s1.getNumberOfStudents();

	return 0;
}


