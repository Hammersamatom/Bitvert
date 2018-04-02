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
	if (argv[1] != NULL)
	{
		ifstream file(argv[1], ios::in | ios::binary);

		if (file.is_open())
		{
			file.seekg(0, file.end);
			int length = file.tellg();
			file.seekg(0, file.beg);
			
			//cout << length << " bytes" << endl;

			char * buffer = new char [length];

			file.read(buffer,length);


			for (int i = 0; i < length; i++)
			{
				string x = bitset<8>(buffer[i]).to_string();
				cout << static_cast<char>(bitset<8>(x).to_ulong() + 64);
				//cout << x << endl;
			}
		}
		else
		{
			cout << "Unable to open file";
		}
	}

	return 0;
}