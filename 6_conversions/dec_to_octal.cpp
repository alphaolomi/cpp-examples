/*
    program : CONVERT A DECIMAL TO OCTAL
    description : to convert decimal number between 0 to 255 to octal 
*/

#include <iostream>
#include <cmath>
using namespace std;

void DecToOct(int decnum)
{

    int digits = 1;
    int howbig = 1;

    // check to see how many digits
    while (1)
    {
        if ((8 * howbig) > decnum)
        {
            break;
        }
        else
        {
            howbig *= 8;
            digits++;
        }
    }

    // using binary to get octal
    for (int i = digits; i > 0; i--)
        cout << ((decnum >> ((i - 1) * 3)) & 7);
}

void DecToQuat(int decnum)
{
    int digits = 1;
    int howbig = 1;

    // check to see how many digits
    while (1)
    {
        if ((4 * howbig) > decnum)
        {
            break;
        }
        else
        {
            howbig *= 4;
            digits++;
        }
    }

    // using binary to get quat
    for (int i = digits; i > 0; i--)
        cout << ((decnum >> ((i - 1) * 2)) & 3);
}

int main()
{

    int decimalnum;
    cout << "Enter the decimal to be converted:";
    cin >> decimalnum;
    DecToOct(decimalnum);
    cout << endl;
    DecToQuat(decimalnum);

    return 0;
}

/*
OUTPUT
Enter the decimal to be converted:16
20
*/