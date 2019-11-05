/*
    program : Converting Hexadecimal to Decimal
    description : to convert decimal number between 0 to 255 to hexadecimal  
*/

#include <iostream>
int main()
{
    int integer;
    std::cout << "Entex Hex to Convert hex to decimal" << std::endl;
    std::cin >> std::hex >> integer;
    std::cout << integer << std::endl;
    return 0;
}

/*
OUTPUT:
Entex Hex to Convert hex to decimal
10
16
*/