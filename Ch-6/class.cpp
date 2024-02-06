#include<iostream>
using namespace std;

/*
		Single	=>	class = 2
*/

class A {
	protected:
		int a;
	public:
		void setA() {
			cout << "Enter a: ";
			cin  >> a;
		}
		
		void getA() {
			cout << "a: " << a << endl;
		}
};

//class ChildClass : AM/VM ParentClass, AM/VM ParentClass
class B : public A {
	protected:
		int b;
	public:
		void setB() {
			cout << "Enter b: ";
			cin  >> b;
		}
		
		void getB() {
			cout << "b: " << b << endl;
		}
		
		void sum()
		{
			cout << "Sum: " << a + b << endl;
		}
};

class C : public A {
	protected:
		int c;
	public:
		void setC() {
			cout << "Enter c: ";
			cin  >> c;
		}
		
		void getC() {
			cout << "c: " << c << endl;
		}
		
		void sum()
		{
			cout << "Sum: " << a + c << endl;
		}
};

class D : public B, public C {
	int d;
	public:
		void setD() {
			cout << "Enter d: ";
			cin  >> d;
		}
		
		void getD() {
			cout << "d: " << d << endl;
		}
		
		void sum()
		{
			cout << "Sum: " << B::a + b + c + d << endl;
		}
};








