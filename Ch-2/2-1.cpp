#include<iostream>
using namespace std;

/*
		What is OOP?
		What is class?
		What is object?
			- it is an instance of class.
			- instance	=>	variable	=>	object	=>	reference
			- we can access each attributes and methods of the class by object.
			
			variable:
				- can access the value directly.
				- don't have any built in methods.
			object:
				- we have to access the attributes from the object.
				- can access the methods of class.
				
		What are the main concepts of OOP?			(2)
			1. class
			2. object
			
			POP	=>	OOP
			
		What are the principles/pillars of OOP? 	(4)
			1. Encapsulation	=>	to combine/to wrap	
				- class
				- attributes
				- methods
				- setter
				- getter
				- static attributes
				- constructor / destructor
			2. Inheritence		=> to share
				- parent class	=>	base class		=>	super class
				- child class	=>	derived class	=>	sub class
				- types
					- single
					- multilevel
					- hierarchical
					- multiple
					- hybrid
				- ambiguity
			3. Polymorphism		=> to behave in multiple way	
				- compile time
					- method overloading
					- operator overloading
					- constructor overloading
				- run time
					- method overriding
					- virtual function
			4. Data abstraction	=> to secure
				- access modifiers
					- public
					- private		(default)
					- protected
				- abstract class

*/

class Student {
	//Access modifier
	/*
		- private	(default)
			- attributes
		- public
			- methods
		- protected
	*/
	private:
		//Attributes
		int id;
		string name;
		double age;
		
	public:
		//Methods
		void input() {
			cout << "Enter id\t: ";
			cin  >> id;
			cout << "Enter name\t: ";
			cin  >> name;
			cout << "Enter age\t: ";
			cin  >> age;
		}
		
		void output() {
			cout << "Id\t: " << id << endl
				 << "Name\t: " << name << endl
				 << "Age\t: " << age;
		}
};


int main() {	
	//Object
	Student s;
	
	s.input();	
//	s.name = "Bhupendra Jogi";	
	s.output();	
}
















