/*

	Ch-3: Encapsulation	(to combine)
	- What is Data Encapsulation?
		- It is concept to combine the data members and data member functions into the class.
		- It simply means to wrap the categorized code with a single unit named class.
		
	- setter & getter
		- setter:
			- a method which takes the input of all or some attributes.
			- simply it's used to set the data in attributes.
			- setters should have a prefix as 'set'.
		- getter:
			- a method which gives the output of all or some attributes.
			- simply it's used to get the data from attributes.
			- getters should have a prefix as 'get'.
	- this keyword:
		- it specifies the scope of class to attribute or method.
		- we can use 'this' keyword with points to '->' symbol.
		- example:
			- this->varName;
			- this->method();
	- private attributes

*/

#include<iostream>
using namespace std;

class Emp {
	private:
		//Attributes
		int id;
		string name;
		double exp;
	public:
		//Methods
		//Setter
		void setData() {
			cout << "Enter id\t: ";
			cin	 >> id;
			cout << "Enter name\t: ";
			cin  >> name;
			cout << "Enter exp\t: ";
			cin  >> exp;
		}
		
		void setExp(double exp) {
			this->exp = exp;
		}
		
		//Getter
		void getData() {
			cout << "Id\t: " << id << endl
				 << "Name\t: " << name << endl
				 << "Exp\t: " << exp << endl;
		}
		
		double getExp() {
			return exp;
		}
};

int main() {	
	Emp e;	
	e.setData();
	
	e.setExp(e.getExp() + 2);
	
	e.getData();	
}









