#pragma once
#include "Employee.h"
#include "Student.h"
#include "Person.h"
class WorkingStudent :
	public Person, public Employee, public Student
{
	bool same_institute;
    public:

	WorkingStudent(long id, string Name, int age, int average, string ins, float s, bool same) :Student(id, Name, age, average, ins), same_institute(same), Employee(id, Name, age, s), Person(id, Name, age) {};


	void setSame(bool same) {
		same_institute = same;
	}
	bool getSam() {
		return same_institute;
	}

	void Print()const
	{
		Student::Print();
		Employee::Print();
		cout << "Is institute " << same_institute << endl;
	}
};

