#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    void setTime()
    {
        cout << "Enter hour\t: ";
        cin >> h;
        cout << "Enter minute\t: ";
        cin >> m;
        cout << "Enter second\t: ";
        cin >> s;
        m += s / 60;
        s = s % 60;
        h += m / 60;
        m = m % 60;
    }

    void getTime()
    {
        cout << h << ":" << m << ":" << s << endl;
    }

    Time operator+(Time t)
    {
        Time sum;
        sum.h = this->h + t.h;
        sum.m = this->m + t.m;
        sum.s = this->s + t.s;

        sum.m += sum.s / 60;
        sum.s = sum.s % 60;
        sum.h += sum.m / 60;
        sum.m = sum.m % 60;

        return sum;
    }

    // Unary post increment
    void operator++(int n)
    {
        this->h++;
        this->m++;
        this->s++;
    }
    // Unary pre increment
    void operator++()
    {
        ++h;
        ++m;
        ++s;
    }
};

int main()
{

    Time t1, t2, t3;

    t1.setTime();
    t2.setTime();

    t1++; // t1 = t1 + 1;   t1.operator++(1);
    ++t2; // t2 = 1 + t2;   t2.operator++();

    t3 = t1 + t2; // t3 = t1.operator+(t2);

    t1.getTime();
    t2.getTime();
    t3.getTime();

    return 0;
}
