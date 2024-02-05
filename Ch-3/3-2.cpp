#include<iostream>
#include "clas_3-2.cpp"
using namespace std;
/*
	Lec: 3.2
	- Array of objects
		- it is an ordered collection of class objects which can be accessed
		  by index value.
		- Syntax:
			ClassName obj[size];
			
	- What is Static member?
	- static keyword
	- Static data member
	- Static member functions
	- Scope Resolution Operator
*/

int main() {
	
	int n;
	
	cout << "Enter number of students: ";
	cin  >> n;
	
	Student s[n];
	
	for(int i=0; i<n; i++) {
		system("cls");
		s[i].setArrayElement(i,n);
	}
	system("cls");
	
	Student::setSchoolName();
	
	for(int i=0; i<n; i++) {
		s[i].getData();
	}
	
}













