#include<iostream>
using namespace std;

class Student {
	//Attributes	=>	Private [default]
		int id;
		string name;
		double per;
		//Static data member
		static string sName;
		static int idCounter;
	public:
	//Methods
		void setData() {
			//AutoIncrement
			id = idCounter++;
			cout << "Enter name\t: ";
			cin  >> name;
			cout << "Enter per\t: ";
			cin  >> per;
		}
		
		void setArrayElement(int index,int n) {
			cout << "Student: " << index+1 << "/" << n << endl;
			id = idCounter++;
			cout << "Enter name\t: ";
			cin  >> name;
			cout << "Enter per\t: ";
			cin  >> per;			
		}
		
		//Static member functions
		static void setSchoolName() {
			cout << "Enter school name: ";
			cin  >> sName;
		}
		
		static void updateSchoolName() {
			cout << "Enter new school name: ";
			cin  >> sName;
		}
		
		void getData() {
			cout << "Id\t: " << id << endl
				 << "Name\t: " << name << endl
				 << "Per\t: " << per << endl
				 << "School\t: " << sName << endl;
		}
};

string Student::sName = "GSEB";
int Student::idCounter = 101;


