// ProjectTeam11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include <fstream>
#include <istream>
#include <iostream>
#include <string.h>
#include "Employee.h"
#include "Student.h"
#include "Employee.h"
#include "WorkingStudent.h"
#include <iostream>>
#include <string>
using namespace std;
#include <iostream>

int main()
{
	int c;	int size;
	string Name;
	long id;
	int age;
	int average;
	string institute;
	float salary;
	bool sameinstitute = true;
	cout << "How much u need ?" << endl;
	cin >> size;
	Person** persons = new Person*[size];

	for (int i = 0; i < size; i++) {
		cout << " what u need type Person" << endl << " 1- Person" << endl << "2- Student" << endl << "3 - Employee" << endl << "4- Working Student and Employee " << endl;
		cin >> c;


		if (c == 1) {
			cout << " Add for Person id ,Name , age : " << endl;
			cin >> id >> Name >> age;
			persons[i] = new Person(id, Name, age);
		}
		else if (c == 2) {
			cout << "add for Student : id , Name , age, average, institute " << endl;
			cin >> Name >> id >> age >> average >> institute;
			persons[i] = new Student(id, Name, age, average, institute);
		}
		else if (c == 3) {
			cout << "  Add for Employee :id , name , age, salary: " << endl;
			cin >> Name >> id >> age >> salary;
			persons[i] = new Employee(id, Name, age, salary);
		}
		else if (c == 4) {

			cout << "Add for Working Student and Employee   id ,name, age, salary,same_institute :" << endl;
			cin >> Name >> id >> age >> salary;
			persons[i] = new WorkingStudent(id, Name, age, average, institute, salary, same_institute);

		}
	}
	for (int i = 0; i < size; i++) {
		persons[i].Print();
	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
