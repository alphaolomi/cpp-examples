#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char redo;
    double a, b, d;

    do
    {
        d = 1;
        //--------Printing my name on screen----------------
        cout << "Welcome to the  program  written by Your Name" << endl;
        cout << "***************************************************************" << endl;
        cout << endl
             << endl
             << endl;
        //----receiving the variables from input--------------
        cout << " Please enter the ten values to know the result";
        cout << endl;
        cin >> a >> b;
        // if condition is introduced to check the sort sequence
        if (a < b)
        {

            a = b;
            d = d + 1;
        }
        //once again the the place at b is empty so required new no. fo variable b
        cin >> b;
        if (a < b)
        {

            a = b;
            d = d + 1;
        }
        //once again the the place at b is empty so required new no. fo variable b
        cin >> b;
        if (a < b)
        {

            a = b;
            d = d + 1;
        }
        //once again the the place at b is empty so required new no. fo variable b
        cin >> b;
        if (a < b)
        {

            a = b;
            d = d + 1;
        }
        //once again the the place at b is empty so required new no. fo variable b
        cin >> b;
        if (a < b)
        {

            a = b;
            d = d + 1;
        }
        //once again the the place at b is empty so required new no. fo variable b
        cin >> b;
        if (a < b)
        {

            a = b;
            d = d + 1;
        }
        cin >> b;
        //once again the the place at b is empty so required new no. fo variable b
        if (a < b)
        {

            a = b;
            d = d + 1;
        }
        cin >> b;
        //once again the the place at b is empty so required new no. fo variable b
        if (a < b)
        {

            d = d + 1;
        }
        cin >> b;
        //once again the the place at b is empty so required new no. fo variable b
        if (a < b)
        {

            a = b;
            d = d + 1;
        }
        cout << endl;
        //here we print how many times the new no. is entered is greater then earlier value
        cout << "number of currect ascending values entered is=" << d << endl
             << endl;
        // Here we print the result
        if (d == 10)
        {
            cout << "Fine,the numbers are in ascending order." << endl
                 << endl;
        }
        else
        {

            cout << "Fine,the numbers are not in ascending order." << endl
                 << endl;
        }
        cout << "enter y or Y to continue:";
        cin >> redo;
        cout << endl
             << endl;
    } while (redo == 'y' || redo == 'Y');

    system("pause");
    return 0;
}