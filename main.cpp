#include <iostream>

typedef unsigned char byte;

byte temp = 3;

byte invert(byte in)
{
    return ~in;
}

int main()
{
    std::cout << temp << std::endl << invert(temp);
    return 0;
}