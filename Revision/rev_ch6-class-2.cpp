#include<iostream>
using namespace std;

/*
	Hierarchical

	RBI	->	ROI
	
	RBI	->	SBI	->	ROI
	RBI	->	BOB	->	ROI
*/

class RBI {
	protected:
		double roi = 5.5;
};

class SBI : public RBI {
	private:
		double s_roi;
	public:
		SBI() {	//var initializer, pre processor
			s_roi = roi * 0.8; 
		}
		
		double getROI(double P,double N) {
			return (P * s_roi * N) / 100;
		}
};

class BOB : public RBI {
	private:
		double b_roi;
	public:
		BOB() {
			b_roi = roi * 0.85;
		}
		
		double getROI(double P,double N) {
			return (P * b_roi * N) / 100;
		}
};

int main() {
	
	SBI s;
	BOB b;
	
	double P = 500000;
	double N = 5;
	
	cout << "SBI: " << s.getROI(P,N) << endl
		 << "BOB: " << b.getROI(P,N) << endl;
	
}





