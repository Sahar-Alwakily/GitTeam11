#pragma once
#include <iostream>
using namespace std;
#include <string.h>
#include <fstream>
#include <istream>
#include <string>
class Person
{

	long id;
	string name;
	int age;

public:
	Person(long id, string Name, int age) :id(id), name{ Name }, age(age){
	};

	void Print()const
	{
		std::cout << "NamePerson:" << name << endl;
		std::cout << "IDPerson:" << id << endl;
		std::cout << "AgePerson:" << age << endl;
	}
};

