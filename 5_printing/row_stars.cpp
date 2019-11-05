#include <iostream>
using namespace std;
const int STARS_PER_LINE = 10;
const int NUM_LINES = 5;

int main()
{
    int stars_printed, lines_printed;
    lines_printed = 0;
    while (lines_printed < NUM_LINES)
    {
        stars_printed = 0;
        while (stars_printed < STARS_PER_LINE)
        {
            cout << '*';
            stars_printed++;
        }
        cout << endl;
        lines_printed++;
    }
    return 0;
}

/*
OUTPUT
**********
**********
**********
**********
**********

*/