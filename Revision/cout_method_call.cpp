#include<iostream>
using namespace std;

class Demo {
	long long int var;
	
	public:
		void setVar(string name = "value") {
			getAndVerifyNumber(name);
		}
		
		void setAndVerifyNumber(string name = "value") {
			ageInput:			
			int count = 0;
			
			cout << "Enter " << name << ": ";
			cin  >> var;
			
			long long int cpy = var;
			
			while(cpy != 0) {
				cpy /= 10;
				count++;
			}
			
			if(count!=10) {
				cout << "Number must be of 10 letters ..." << endl;
				goto ageInput;
			}			
		}
		
		int getVar() {
			return var;
		}
		
		void getData() {
			cout << "Value: " << getVar() << endl;
		}
};

int main() {
	
	Demo d;
	
	d.setVar("number");
	d.getData(); 
	
}
