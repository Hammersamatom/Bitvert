#include <iostream>

typedef unsigned char byte;

byte invert(byte in)
{
    return ~in;
}

int main()
{
    std::cout << invert(3);
    return 0;
}