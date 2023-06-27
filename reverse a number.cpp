#include <iostream>
using namespace std;

int main()
{
    int i, reversed_number = 0, rem;
    cout << "Enter a number to reverse them" << endl;
    cin >> i;

    while (i > 0)
    {

        rem = i % 10;

        reversed_number = reversed_number * 10 + rem;

        i = i / 10;
    }

    cout << "rev=" << reversed_number;

    return 0;
}