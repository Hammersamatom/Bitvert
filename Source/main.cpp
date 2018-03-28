#include <iostream>
#include <bitset>

using namespace std;

typedef  char byte;

byte invert(byte* in)
{
	return ~*in;
}

int main(int argc, byte *argv[])
{
    cout << argv[1] << endl;
    cout << invert(argv[1]) << endl;
    return 0;
}