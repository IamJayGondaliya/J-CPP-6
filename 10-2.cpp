#include <iostream>
using namespace std;

// Abstract
class India
{
public:
    // PVM
    virtual void democracy() = 0;
    // child's data can be accessed by pointer
    virtual void language()
    {
        cout << "Hindi" << endl;
    }
};

class Pak : public India
{
public:
    void language()
    {
        cout << "Urdu" << endl;
    }
};

int main()
{

    India *ptr;
    Pak p;

    ptr = &p;

    ptr->language();

    return 0;
}