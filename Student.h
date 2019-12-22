#pragma once
#include "Person.h"
#include<fstream>
#include<istream>
#include<iostream>
#include<string>
class Student :
	public Person
{
	int average;
	string institute;
public:
	Student(long id, string Name, int age, int average, string ins) :Person(id, Name, age), average(average), institute(ins) {};
	void setAverage(int av) {
		average = av;
	}
	void setInstitute(string in) {
		institute = in;
	}

	int getAverage() {
		return average;
	}
	string getInstitute() {
		return institute;
	}

	void Print()const
	{
		Person::Print();
		cout << "Average:" << average << endl << "Instiute" << institute << endl;
	}


};

