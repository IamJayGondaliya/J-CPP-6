#include<iostream>
using namespace std;

/*
		Overloading:
			- Function, Constructor or the Operators which have the same name identification with
			  different signatures(ReturnType, Parameters).
			  
			- method overloading
			- operator overloading
			- constructor overloading
			
			- It's a compile time procedure, in which we have to modify the code to create the 
			  multiple behaviours.
*/

class Math {
	public:
		//Method overloading
		void printSum(int a,int b) {
			cout << "Sum of " << a << " & " << b << " = " << a+b << endl;
		}
		void printSum(int a,int b,int c) {
			cout << "Sum of " << a << ", " << b << " & " << c << " = " << a+b+c << endl;
		}
		void printSum(int a,int b,int c,int d) {
			cout << "Sum of " << a << ", " << b << ", " << c << " & " << d << " = " << a+b+c+d << endl;
		}
		
		//defaultParameters: Parameters with some default values. OPTIONAL
		int getSum(int a,int b,int c = 0,int d = 0) {
			cout << "a: " << a << endl
				 << "b: " << b << endl
				 << "c: " << c << endl
				 << "d: " << d << endl;
			return a+b+c+d;
		}
		
		void name() {
			cout << "i'm math class." << endl;
		}
};

// 					Overloading			Overriding
//		--------------------------------------------------
/*		Name:		same				same
		Params:		different			same
		Class:		same				derrived (child) 
		RType:		different/same		same
*/

class Calc : public Math {
	public:
		//Method overriding
		int getSum(int a,int b,int c = 0,int d = 0) {
			cout << "I'm from CALC\n";
			return a+b+c+d;
		}
		
		void name() {
			cout << "I'm Calc class" << endl;
		}
};

int main() {
	
	Calc m;
	
	m.name();
	
	m.printSum(11, 22);
	m.printSum(11, 22, 33);
	m.printSum(11, 22, 33, 44);
	
//	m.getSum(11, 22);
	
	cout << "Sum: " << m.getSum(11, 22, 33, 10);
	
}

