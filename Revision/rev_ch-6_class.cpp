#include<iostream>
using namespace std;

class A {
	protected:	
		int a;	
	public:
		A() {
			cout << "Enter a: ";
			cin  >> a;
		}
		
		void getA() {
			cout << "a: " << a << endl;
		}
};

class B : public A {	
	int b;
	public:
		B() {
			cout << "Enter b: ";
			cin  >> b;
		}
		
		void getB() {
			cout << "b: " << b << endl;
		}
		
		void sum() {
			cout << "Sum: " << a + b << endl;
		}
};


/*
	OOP:	Object Oriented Programming
		- Every state and behaviour will be handled by object.
		
		Concepts:
			- class			=>	bluepring
			- object		=>	reference
			
		Principles:
			- Encapsulation		=>	to wrap/combine					DONE
			- Inheritence		=>	to share						
			- Polymorphism		=>	to behave in multiple way
			- Data abstarction	=>	to secure

	- What is Inheritance?
		- to share the data from one class to another class.
		- the class which shares the data will be called 'Parent Class'.
		- the class which gets the data from another class will be called 'Child Class'.
		- Similar words:
			- Parent class		=>		Super class			=>		Base class
			- Child class		=>		Sub class			=>		Derived class			
		- Syntax:
		
			class ParentClass {
				pData
			}
			
			class ChildClass : AM/VM ParentClass {
				cData
			}
			
			int main() {
				ChildClass child;
				
				child.pData;
				child.cData;
			}
		
		- NOTE:	The child class can access either 'public' or 'protected' data of parent class.
		
		- AM(Access Modifier)/VM(Visibility Modifier):
		
			- public	=>	can be accessed anywhere by object.
			- private	=>	DEFAULT. can be accessed in class only.
			- protected	=>	can be accessed in class and child class.

	- Types of Inheritance (Simple and Multilevel)
*/












