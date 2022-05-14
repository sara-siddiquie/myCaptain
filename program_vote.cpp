#include <iostream>
using namespace std;

// Creating a program to check eligibility of a person to vote

int main()
{
    int age;
    cout << "Please enter your age : ";
    cin >> age;

    if (age <= 0)
    {
        cout << "Invalid Input";
    }

    else if (age < 18)
    {
        cout << "You are not eligible to vote" << endl;
        cout << "You'll have to wait " << 18 - age << " years to vote" << endl;
    }
    else if (age >= 18)
    {
        cout << "You are eligible to vote";
    }

    return 0;
}