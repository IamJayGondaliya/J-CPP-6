#include <iostream>
using namespace std;

/*
    Abstract class:
        - class which can't be instantiated(to create object).
        - using pure virtual function.
            - virtual void fun() = 0;
        - abtract class must be inherited.
        - in child class, pure virtual function must be overridden.
        - otherwise, the child class also become abstract.

*/

// Abstract
class Lock
{
public:
    // PVM
    virtual void key(int a, char c) = 0;

    Lock()
    {
        cout << "Lock is opened..." << endl;
    }
};

class Door : public Lock
{
public:
    // PVM override
    void key(int a, char c)
    {
        cout << "We gor key..." << endl;
    }

    Door()
    {
        cout << "Door is opened..." << endl;
    }
};

int main()
{
    Door l;
}