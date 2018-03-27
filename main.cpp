#include <iostream>
#include <bitset>

//using namespace std;

typedef unsigned char byte;

byte temp = '1';

byte invert(byte in)
{
    return ~in;
}

int main()
{
    std::cout << temp         << ' ' << std::bitset<8>(temp).to_string()         << std::endl; 
    std::cout << invert(temp) << ' ' << std::bitset<8>(invert(temp)).to_string() << std::endl; 
    return 0;
}