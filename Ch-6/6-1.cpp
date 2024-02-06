#include<iostream>
#include "class.cpp"
using namespace std;

int main() {
	
	D d;
	
	d.B::setA();
	d.setB();
	d.setC();
	d.setD();
	
	d.B::getA();
	d.getB();
	d.getC();
	d.getD();
	
	d.sum();
	
}






/*
	What inheritence?
	- to share.
	- Share data from one class to another class.
	- In this concept, the class which is sharing the data
	  will be called 'Parent class'.
	- The class which is getting data from another class
	  will be called 'Child class'.
	- Similar words:
		- Parent class		=>		Super class		=>		Base class
		- Child class		=>		Sub class		=>		Derived class
		
	- Types of inheitence:
		1. Single
		2. Multilevel
		3. Hierarchical
		4. Multiple
		5. Hybrid
	
*/





