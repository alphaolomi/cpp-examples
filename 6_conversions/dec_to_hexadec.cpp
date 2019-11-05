/*
    program : Decimal to hexadecimal. 
    description : to convert decimal number between 0 to 255 to hexadecimal  
*/

#include <iostream>
using namespace std;

int main(void)
{
    int mynum;

    cout << "\nEnter a number: ";
    cin >> mynum;

    cout.unsetf(ios::dec);
    cout.setf(ios::hex | ios::showbase);

    cout << "In hex: " << mynum;
    cout.unsetf(ios::hex);
    cout.setf(ios::oct);

    cout << "\nIn Octal: " << mynum;
    cout.unsetf(ios::oct | ios::showbase);
    cout.setf(ios::dec);

    system("pause");
    return 0;
}