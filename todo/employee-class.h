//employee-class.h
#include <string>
#include <iostream>
using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
public: 
	int Id;
	string Name;
	int Salary;
	string Title;

	Employee() // default
	{
		Id  = 0;
		Name = "default";
		Salary = 0;
		Title = "none";
	}

	Employee(int id, string name, int salary, string title) // with arg
	{
		Id = id;
		Name = name;
		Salary = salary;
		Title = title;
	}

	void printEmployeeData()
	{
		cout << "\n\tEmployee ID:     " << Id;
		cout << "\n\tEmployee Name:   " << Name;
		cout << "\n\tEmployee Salary: " << Salary;
		cout << "\n\tEmployee Title:  " << Title << endl;
	}

};

#endif EMPLOYEE_H