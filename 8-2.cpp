/*
    8.2
        - Operator Overloading
            - binary operator overloading
            - unary operator overloading

        - What is operator overloading?
            - It is a concept by which we can invoke the built in method
              'operator()' from any class using operators.
            - We can use any operator with object to overload the operator.
            - It can overload, +, -, *, /, %, ++, --, %, >, >=, <, <=, ==, !, !=
              operators.

            - Syntax:
                - obj1 + obj2;
                - it will invoke the 'operator+()' method.

            - To handle the operator overloading, we have to create the 'operator()'
              method in class with relavant operator.

            - Syntax:
                class MyClass {
                    public:
                        return_type operator(parameters) {
                            // any process here...
                        }
                };
*/

#include <iostream>
using namespace std;

class Demo
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }

    void getData()
    {
        cout << "a: " << a << endl;
    }

    Demo addObj(Demo d)
    {
        Demo sum;
        sum.a = this->a + d.a;
        return sum;
    }

    Demo operator+(Demo d)
    {
        Demo sum;
        sum.a = this->a + d.a;
        return sum;
    }
};

int main()
{
    Demo d1, d2, d3;

    d1.setData(10);
    d2.setData(35);

    // d3 = d1.addObj(d2);

    d3 = d1 + d2; // d3 = d1.operator+(d2);

    d1.getData();
    d2.getData();
    d3.getData();

    return 0;
}