#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int number, result;
    cout << "Enter any number : ";
    cin >> number;
    result = pow(number, 1.0 / 3.0);
    cout << "\n\Cube root of " << number << " is: " << result;
}

/*
OUTPUT
Enter any number : 27
Cube root of 27 is: 3
*/