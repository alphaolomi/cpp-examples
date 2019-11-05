/* 
    program : Decimal to binary. 
    description : to convert decimal number between 0 to 255 to binary  
*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    unsigned short int x = 0, b = 128, z = 0, a = 8;
    cout << "please enter the number between 0 and 255 \n";
    cin >> x;

    if (x > 255)
    {
        cout << " out of range ";
    }
    else
    {
        cout << x << " converted to binary number :";
        while (a != 0)
        {
            z = x & b;
            if (z == 128)
                cout << "1";
            else
                cout << "0";
            x = (x << 1);
            a--;
        }
    }
    cout << "\n";

    system("pause");
    return 0;
}