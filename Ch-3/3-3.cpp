/*		
	Lec: 3.3
	- What is Constructor?				
		- It is a method which is automatically invoked when class
		  is instanciated.
		- Instanciate:	to create object
		- Instance	 :	object
		- Invoke	 :	call the method of class
		
		- It holds the initial procedures of any class.
			- assigning the values.
			- fetching the data.
			- other starting or pre-loading procedures.
			
		Rules:
			- It must have the same name as class name.
			- It can't have any return type, void, int, etc...
			- It can't return any value.
			
	- Types of constructors
	- What is Destructor?
*/

#include<iostream>
using namespace std;

class Hotel {
	int id;
	static int idCounter;
	string name;
	public:
		Hotel() {
			id = idCounter++;
			cout << "Welcome to the Hotel !!" << endl;
			cout << "Id\t: " << id << endl;
			setData();
		}
				
		//Setter
		void setData() {
			cout << "Enter name: ";
			cin  >> name;
		}
		
		static void header() {
			cout << "Id\tName\n======= =======" << endl;
		}
		
		void getDataInTable() {
			cout << id << "\t" << name << endl;
		}
};

int Hotel::idCounter = 101;

int main() {
	
	int n = 3;	
	Hotel h[n];
	
	Hotel::header();
	
	for(int i=0; i<n; i++)	h[i].getDataInTable();
}








