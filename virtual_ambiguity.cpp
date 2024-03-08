#include <iostream>
using namespace std;

class A
{
public:
    virtual void getA()
    {
        cout << "Class A" << endl;
    }
};

class B : virtual public A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
};

int main()
{
    D d1;

    d1.getA();

    return 0;
}