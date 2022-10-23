#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()

//Day 0 Challenge you have to save a line of inpur form the stdin to a variable. print Hello World on second line
//-- Input Format
// A single line of text denoting "input string(the variable whose contents must be printed)"

//-- Output format
//-- Print Hello, World on the first line, conents of input string on second line

//Declare a variable named 'input_string' to hold our input.
{
    string input_string;

    //Read a full line of input from stdin(cin) and save it on our variable,input string.
    getline(cin, input_string);

        //Print a string literal saying "Hello,World" to stdout using cout.
         cout << "Hello, World." << endl;


    //Write a line of code here that prints the contents of input_string
    cout << input_string;

    return 0;
}

