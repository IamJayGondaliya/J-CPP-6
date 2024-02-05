/*	
					C lang			v/c			C++
				-------------------		-------------------
Extension		hello.c					hello.cpp
Header file		stdio.h					iostream.h	/	iostream
Extras					-				using namespace std;	(Dev-C++, VS Code)
main rType		void					int
print			printf() function		cout object
scan			scanf() function		cin object
Data type		int, char, float		int, char, float, string, double, bool
Type			POP						OOP		

	cout:
		- it is an object from std namespace;
		- example:
			cout << "Some data here..";
		- '<<' insertion operator ijects the data in cout.
		
	cin:
		- it is an object from std namespace;
		- can be used for input the data.
		- it won't require any format specifier.
		- example:
			cin >> varName;
		- '>>' extraction operator extracts the data from cin.
		


*/

#include<iostream>
using namespace std;

int main() {
	
	int n;
	
	cout << "Enter n: ";
	cin  >> n;
	
	int a[n];
	
	for(int i=0; i<n; i++) {
		cout << "Enter a[" << i << "]: ";
		cin  >> a[i];
	}
	
	for(int i=0; i<n; i++) {
		cout << "a[" << i << "]: " << a[i] << endl;
	}
	
	
}















