#include <string>
#include <iostream>
#include <fstream>
#include "operate.h"

using std::string;
using std::fstream;
using std::cout;
using std::cerr;
using std::endl;

void process(fstream& in)
{
    string s;
    Operate pairs;
    while (pairs.read(in)) {
        cout << pairs.calc() << "\n";
    }
}

int main()
{
    string filename("source.txt");
    fstream in(filename);
    if (!in) {
        cerr << "Invalid source filename for math operation importing!" << endl;
    }
    else {
        process(in);
    }

    return 0;
}
