#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <fstream>
//#include <bitset>

using namespace std;

ifstream inFile;
ofstream outFile;



// Used for finding instances of strings within other strings.
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


// Flips the bits of selected buffer char[] based on given length.
void flipIt(char * buffer, size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		buffer[i] = ~buffer[i];
		//buffer[i] = static_cast<char>(bitset<8>(buffer[i]).flip().to_ulong());
	}
}


// Writes the selected buffer char[] to outFile based on given length.
void writeOut(char * buffer, size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		outFile << buffer[i];
	}
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

		inFile.open(inFileName, ios::in | ios::binary);
		outFile.open(outFileName, ios::out | ios::binary);

		if (inFile.is_open())
		{
			inFile.seekg(0, inFile.end);
			size_t fileLength = inFile.tellg();
			inFile.seekg(0, inFile.beg);

			char * inBuffer = new char [fileLength];

			inFile.read(inBuffer,fileLength);

			flipIt(inBuffer, fileLength);

			writeOut(inBuffer, fileLength);
		}
		else
		{ 
			printf("Unable to open file");
		}
	}

	return 0;
}

