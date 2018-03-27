#include <iostream>
#include <bitset>

//using namespace std;

typedef unsigned char byte;

byte temp = 'g';

byte invert(byte in)
{
    return ~in;
}

int main()
{
	//std::cin  >> temp;
    //std::cout << temp         << ' ' << std::bitset<8>(temp).to_string()         << std::endl; 
    std::cout << invert(temp) << ' ' << std::bitset<8>(invert(temp)).to_string() << std::endl; 
    return 0;
}