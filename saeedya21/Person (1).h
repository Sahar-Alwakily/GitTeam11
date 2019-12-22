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
	void setName(string n) {
		name = n;
	}
	void setId(long i) {
		id = i;
	}
	void setAge(int a) {
		age = a;
	}
	string getName() {
		return name;
	}
	long getId() {
		return id;
	}
	int getAge() {
		return age;
	}

	void Print()const
	{
		std::cout << "NamePerson:" << name << endl;
		std::cout << "IDPerson:" << id << endl;
		std::cout << "AgePerson:" << age << endl;
	}
};

