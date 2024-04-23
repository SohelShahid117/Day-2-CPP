// 2.4 Introduction to Loops in C++ programming | Guaranteed Placement Course | Lecture 2.4
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter an integer number for forLoop : ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    // cout << sum;
    cout << "total from 1 to " << n << " = " << sum << endl;

    // int x;
    // x = 1;
    // while (x > 0)
    // {
    //     cout << "hi" << endl;
    //     if (x == 10)
    //     {
    //         break;
    //     }
    //     x++;
    // };

    int num;
    cout << "enter a number for whileLoop: ";
    cin >> num;
    while (num > 0)
    {
        cout << "entering number in while loop is : " << num << endl;
        cout << "enter a negative number to out the loop : ";
        cin >> num; // enter a negative number to out the loop
    }

    int z;
    cout << "enter a number for doWhileLoop : ";
    cin >> z;
    do
    {
        cout << "entering number in do while loop is : " << z << endl;
    } while (z < 0);

    return 0;
}