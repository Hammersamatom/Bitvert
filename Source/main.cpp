#include <iostream>
#include <cstdlib>
#include <cstring>// for exit()
#include <string>
#include <fstream>
#include <bitset>
//#include <boost/dynamic_bitset.hpp>

using namespace std;

int main(int argc, char *argv[])
{
	ofstream myfile("example.txt");

	string txt(argv[1]);

	for (int i = 0; i < txt.length(); i++)
	{
		string x = bitset<8>(txt[i]).flip().to_string();
		myfile /* << "A " */ << std::strtol(x, nullptr, 2); //<<  " B " << bitset<8>(txt[i]).flip() << endl;
	}

	myfile.close();

    return 0;
}