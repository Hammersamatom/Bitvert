#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <fstream>
#include <bitset>


using namespace std;


int count(string in, string what)
{
	int count = 0;
	string::size_type pos = 0;

	while ((pos = in.find(what, pos)) != string::npos)
	{
		count++;
		pos += what.length();
	}
	
	return count;
}





int main(int argc, char *argv[])
{
	if (argv[1] != NULL)
	{
		string outFileName;
		string inFileName = argv[1];

		if (argv[2] != NULL)
		{
			outFileName = argv[2];
		}

		if (argv[2] == NULL)
		{
			if (count(inFileName, ".inv") > 0)
			{
				outFileName = inFileName.substr(0, inFileName.length() - 4);
			}
			else
			{
				outFileName = string(argv[1]) + ".inv";
			}
		}

		ifstream inFile(inFileName, ios::in | ios::binary);

		if (inFile.is_open())
		{
			ofstream outFile(outFileName, ios::out | ios::binary);
			
			inFile.seekg(0, inFile.end);
			int length = inFile.tellg();
			inFile.seekg(0, inFile.beg);

			char * buffer = new char [length];

			inFile.read(buffer,length);

			for (int i = length; i > 0; i--)
			{
				//outFile << buffer[i];
				string x = bitset<8>(buffer[i]).flip().to_string();
				outFile << static_cast<char>(bitset<8>(x).to_ulong());
			}
		}
		else
		{
			cout << "Unable to open file";
		}
	}

	return 0;
}