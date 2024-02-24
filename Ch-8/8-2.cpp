#include<iostream>
using namespace std;

/*
		// Operator overlading:
*/

class User {
	int a;
	public:
		User() { }
		User(int a) {
			this->a = a;
		}
		
		void getData(string name) {
			cout << name << "-a: " << a << endl;
		}
		
		//Binary
		User operator+(User u) {
			User tmp;
			tmp.a = a + u.a;
			return tmp;
		}
		
		//Unary
		void operator++(int i) {
			a++;
		}
		
		void operator++() {
			++a;
		}
};

int main() {
	
	User u1(10);
	User u2(2);
	User u3;
	
	u3 = u1 + u2;	// u3 = u1.operator+(User u2);
	
	//Post
	u1++;	//	u1 = u1 + 1;	u1.operator++(int i);
	
	//Pre
	++u2;	//	u2 = 1 + u2;	u2.operator++();
	
	u1.getData("u1");
	u2.getData("u2");
	u3.getData("u3");
}






