#include <iostream>
using namespace std;

/*

    cout << Insertion
    cin >> Extraction

    Exception handling:

    Error:
        - compile time.
        - syntax mistake.
        - will prevent the code execution.
    Exception:
        - run time.
        - logical mistake.
        - will break the code execution from the exception part.

    Exception handling blocks:

        try {
            //Code which may cause an exception...
            throw value;
        }
        catch(DataType value) {
            //Solution of specific exception
        }
        catch(...) {
            //General catch block
        }

*/

int main()
{

    int a, b;

    cout << "Start..." << endl;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    try
    {
        if (b == 0)
        {
            // Exception
            throw 3.14;
        }
        else
        {
            // Output
            cout << "Division: " << a / b << endl;
        }
    }
    catch (int val)
    {
        // Solution
        cout << "Can't devide by ZERO !!" << endl;
    }
    catch (char val)
    {
        cout << "This is a character..." << endl;
    }
    catch (...)
    {
        // General catch block
        cout << "Unexpected error occured..." << endl;
    }

    cout << "End..." << endl;

    return 0;
}