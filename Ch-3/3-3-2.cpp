#include<iostream>
using namespace std;

/*
	Types of constructor:
	
		1. Default constructor	[built-in]
		2. Parameterized constructor
		3. Copy constructor
			- implicit
			- explicit
			
	What is Destructor?
		- It is a block of code which is automatically invoke when the object is destroyed from the memory.
		
		- Rules:
			- It must have same name as class name with '~' as prefix.
			- It can't return any value.
			- It can't have any return type nor parameters.
*/

class Student {	
	int id;
	string name;
	double age;
	static int idCounter;
	
	public:
		
		//Constructor
		Student() {
			id = idCounter++;
			this->setData();
		}
		
		//Parameterized
		Student(string name,double age) {
			id = idCounter++;
			this->name = name;
			this->age = age;
		}
		
		Student(int id,string name,double age) {
			this->id = id;
			this->name = name;
			this->age = age;
		}
		
		//Destructor
		~Student() {
			cout << "Student: "	<< id << " is deleted..." << endl;
		}
		
		static void setInitialId() {
			cout << "Enter the initial id: ";
			cin  >> idCounter;
		}
		
		void setData() {
			cout << "Id\t: " << id << endl;
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

int Student::idCounter = 101;

int main() {
	
	Student s1("First", 11);
	Student s2("Second",22);
	Student s3("Third",33);
	
	s1.getData();
	s2.getData();
	s3.getData();
	
}









