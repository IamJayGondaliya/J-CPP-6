#include<iostream>
using namespace std;

//Declaration	-	Indexing
void virtualFunctionDemo();
void pointerObjectDemo();

/*

	
	
	10.2
		- Pointer object
		- Virtual function:
			- virtual:	single existance throughout the system.
			- to remove the ambigious data permenently.
		
		- Abstract class:
			- a class which can't be instanciated.
			- we can't create any object of the class.
			- Abstract class can be created using pure virtual function.
			
				- Pure virtual function:
					- virtual function with no body and with initial value of ZERO (0).
					- Syntax:						
						virtual rType funName([params]) = 0;
					- It can't have any body.
			
			- To access the data of abstract class, we must have to inherit the class
			  in child class.
			- While inheriting a abstract class, we must have to reincarnate(re-create)
			  the pure virtual method of parent class with same signature.
			- If we don't re-create the pure virtual method of parent class in child class,
			  the child class will also become abstract class.
			
					
			
*/

//Abstract class
class Lock {
	public:
		//Pure virtual method
		virtual void key(int i,string s) = 0;
		
		//Constructor
		Lock() {
			cout << "Lock unlocked..." << endl;
		}
};

class Door : public Lock {
	public:
		Door() {
			cout << "Door opened..." << endl;
		}
		
		//pure virtual method overrided...
		void key(int a,string b) {
			cout << "Key provided..." << endl;
		}
};

int main() {	
	Door d;	
}

class A {
	public:
		virtual void getData() {
			cout << "I'm class A" << endl;
		}
};

class B : public virtual A {};
class C : public virtual A {};

class D : public B, public C {};


class User {
	int id;
	static int idCounter;
	string name;
	double age;
	
	public:
		//Constructor
		User() {
			id = idCounter++;
		}
		
		void setData() {
			cout << "Enter name\t: ";
			cin  >> name;
			cout << "Enter age\t: ";
			cin  >> age;
		}
		
		void getData() {
			cout << "Id\t: " << id << endl
				 << "Name\t: " << name << endl
				 << "Age\t: " << age << endl;
		}
};
int User::idCounter = 101;



void virtualFunctionDemo() {
	
	D d;
	
	d.getData();
	
}

void pointerObjectDemo() {		
	User u;
//	Pointer object
	User *ptr;
	
	ptr = &u;
	
//	u.setData();
	ptr->setData();
	
//	ptrObject->attr/method();
//	ptr->getData();
	u.getData();
	
}











