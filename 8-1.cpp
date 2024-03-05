/*
    CPP - OOP (Object Oriented Programming)
        - Each data sill be handled by object.
        - 4 Principles/Pillers
            1. Encapsulation    =>  to combine, to wrap.
            2. Inheritence      =>  to share.
            3. Polymorphism     =>  to behave in multuiple way.
            4. Abstraction      =>  to secure

    Ch. 8: Polymorphism
    8.1
        - What is Polymorphism?
            - Polymorphism is a concept which indicates the multiple
              use of any methods.
            - Poly      =   Multiple
            - Morphs    =   Behaviours / States / Forms
            - Poly + Morphs     =>  Polymorphism

        - Types of Polymorphism
            - 2 Types
                1. Compile time:
                    - Method overloading
                    - Operator overloading
                    - Constructor overloading
                2. Run time:
                    - Method overriding
                    - virtual function

                Compile time:
                    - Takes decision while compiling the code.
                Run time:
                    - Takes decision after the code is compiled and
                      is running now.

        - Method Overloading
            - Creating a same method with different signature(parameters
              /return type) in the same class.
            - The methods will have the same name only.
            - All the methods will be created in same class.
        - Method Overriding
            - Creating a same named and signature methods in derived(child) class.
            - The method name, parameter & return type will be same.
            - Another method will be created in child class.

    - Difference:

                        Overloading             Overriding
        -------------------------------------------------------------
        Name            same                    same
        Parameters      different               same
        Return type     different               same
        Class           same                    derived(child)
        Type            compile time            run time



*/

#include <iostream>
using namespace std;

class Google
{
public:
    void signInWithGoogle(string email)
    {
        cout << "User " << email << " signed in to Google..." << endl;
    }
};

class MyApp : public Google
{
private:
    string appName;

public:
    void setAppName(string appName)
    {
        this->appName = appName;
    }

    // Method overloading
    void signIn(string email)
    {
        cout << "User " << email << " signed in with email..." << endl;
    }

    void signIn(string username, string password)
    {
        cout << "User " << username << " signed in username & password..." << endl;
    }

    // Method overriding
    void signInWithGoogle(string email)
    {
        cout << "User " << email << " signed in to " << appName << "..." << endl;
    }
};

int main()
{

    MyApp app1;
    MyApp app2;

    app1.setAppName("Jio App");
    app2.setAppName("Amazon");

    app1.signIn("demo@mail.io");
    app2.signIn("Yash", "#Yash@123");

    app2.signInWithGoogle("mygoogle@mail.id");
}
