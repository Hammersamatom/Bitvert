#include <iostream>
#include <cstdlib> // for exit()
#include <bitset>

using namespace std;

char invert(char in)
{
	return ~in;
}

int main(int argc, char *argv[])
{
    cout << argv[1][0] << endl;
    cout << invert(argv[1][0]) << endl;
    cout << invert(invert(argv[1][0])) << endl;
    return 0;
}