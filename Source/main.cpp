#include <iostream>
#include <cstdlib> // for exit()
#include <cstring>
#include <bitset>
#include <boost/dynamic_bitset.hpp>

using namespace std;

const string temp = "";

int main(int argc, char *argv[])
{


    if (argc == 1)
        printf("Usage: %s \n", argv[0]);

    const bitset<64> foo(string (argv[1]));
    //const boost::dynamic_bitset<> foo(8, argv[1]);

    cout << string(argv[1]) << endl;

    cout << "ARGC: " << argc << "\n";
    printf("Length o/ ARGV[1]: %lu \n", strlen(argv[1]));
    printf("ARGV[1]: %s \n", argv[1]);
    //cout << "ARGV[1] Bits: " << foo <<endl;

    return 0;
}