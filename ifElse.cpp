// #include <iostrem>
// 2.3 If/else statement in C++ programming | Data Structure and Algorithm Course | Lecture 2.3

#include <iostream>
using namespace std;
int main()
{
    int savings;
    cout << "saving amount = ";
    cin >> savings;
    if (savings > 5000)
    {
        cout << "Farzana" << endl;
        if (savings >> 7000)
        {
            cout << "Far" << endl;
        }
        else
        {
            cout << "zana" << endl;
        }
    }
    else if (savings > 2000)
    {
        cout << "Sharmin" << endl;
    }
    else
    {
        cout << "Sumi" << endl;
    }

    int a, b, c;
    cout << "enter three comparison value :" << endl;

    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "large number is: " << a << endl;
        }
        else
        {
            cout << "large number is: " << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "large number is: " << b << endl;
        }
        else
        {
            cout << "large number is: " << c << endl;
        }
    }

    int n;
    cout << "enter the even odd number:";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << " - is even number " << endl;
    }
    else
    {
        cout << n << " - is odd number " << endl;
    }

    return 0;
}