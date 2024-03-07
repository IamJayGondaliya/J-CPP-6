#include <iostream>
using namespace std;

/*
    OOP
        - Encapsulation
        - Inheritence
        - Polymorphism
        - Data abstraction  -   to secure
            - access modifiers / visibility modifiers
                - public    - accessible everywhere by using the object
                    - setter, getter + other methods
                - private   - accessible in the class only  [default]
                    - attributes
                - protected - accessible in the class and derived(child) class
                    - attributes

        - Pointer object:
            - class_name obj;
            - class_name *ptr;
            - ptr = &obj;
            - obj.setData();
            - ptr->getData();

*/

// Parent class
class Student
{
    // private:
    double per = 65.74;

protected:
    string name = "Aman";

public:
    int id = 101;

    void getPer()
    {
        cout << per << endl;
    }
};

// Child class
class Demo : public Student
{
public:
    void getName()
    {
        cout << name << endl;
    }
};

int main()
{
    Demo d;
    Demo b;
    Demo *p;

    b = d; // shallow copy  - new memory occupied

    p = &d; // deep copy - new memory won't be occupied

    d.getName();
    p->getPer();
}