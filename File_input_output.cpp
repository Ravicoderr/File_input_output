#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s = "i am ravi";
    // Opening files using constructor and writing it
    ofstream output("FileOutput.txt"); // Write operation
    output << s;

    string s1;
    // Opening files using constructor and reading it
    ifstream input("FileInput.txt"); // Read operation
    input >> s1;
    cout << s1;
    return 0;
}
/*File I/O in C++: Reading and Writing Files
These are some useful classes for working with files in C++

fstreambase
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

Using the constructor
Using the member function open() of the class */