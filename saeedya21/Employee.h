#pragma once
#include "Person.h"
class Employee :
	public Person
{
	float salary;
    public:
	Employee(long id, string Name, int age, float s) : Person(id, Name, age), salary(s) {};
	void Print()const {
		Person::Print();
		cout << "Salary" << salary << endl;
	}

};

