#include <iostream>
#include <bitset>

//using namespace std;

typedef unsigned char byte;

byte temp = 'g';

byte invert(byte in)
{
    return ~in;
}

int main(int argc, char* argv[])
{
	//std::cout << argv[1] << std::endl;
    std::cout << argv[1]         << ' ' << std::bitset<8>(argv[1]).to_string()         << std::endl;
    //std::cout << invert(argv[0]) << ' ' << std::bitset<8>(invert(argv[0])).to_string() << std::endl;
    return 0;
}