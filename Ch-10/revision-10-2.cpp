#include<iostream>
using namespace std;

void pointerObject();
void virtualFunction();
void abstractClass();

/*
	
*/



class User {
	int id;
	//Autoincrement
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


namespace virtualDemo {
	class A {
		public:
			virtual void getA() {
				cout << "I'm class A" << endl;
			}
	};
	
	class B : virtual public A {};
	class C : virtual public A {};
	class D : public B, public C {};	
}

namespace abstractDemo {
	
	//abstract
	class Lock {
		public:
			//Constructor
			Lock() {
				cout << "Lock opened..." << endl;
			}
		
			//Pure virtual method
			virtual void key(int a,string s,double d) = 0;			
	};
	
	//Child class
	class Door : public Lock {
		public:
			//Constructor
			Door() {
				cout << "Door opened..." << endl;
			}
			
			//override
			void key(int i,string j,double k) {
				cout << "This is the KEY" << endl;
			}
	};
	
}

int main() {	
	abstractClass();	
}

void pointerObject() {
	User u;
	//Pointer object
	//	*	=>	De-reference operator
	User *ptr;
	
	//Initialization
	ptr = &u;
	
	ptr->setData();
	
//	u.setData();
	u.getData();
//	ptr	=>		->	points to	(CPP/PHP)
//	ptr->attr/mthd();
}

void virtualFunction() {
	
	virtualDemo::D d;
	
	d.getA();
	
}

void abstractClass() {
	
	abstractDemo::Door d;
	
}



