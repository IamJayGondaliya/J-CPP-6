/*
	Ch-10: Data Abstraction
	
	- What is Data Abstraction?
		- Abstarction is a concept where we prevent the access of data from public usage.
		- Hide data from public use.
		- Secure the data from being modified too easily.		
	
	- Access Modifiers in Inheritance (Use of public, private, and protected)
*/

#include<iostream>
using namespace std;

class Admin {
	private:
		string cmp_name = "FB";		
	public:
		void changeCmpName(string newName) {
			cmp_name = newName;
		}
		
		string getCmpName() {
			return cmp_name;
		}
};

class Manager : protected Admin {
	
};

class Emp : public Manager {
	public:		
		void getName() {
			cout << "Name\t: " << getCmpName() << endl;;
		}
};

int main() {
	
	Emp e;
	e.getName();
	
}


