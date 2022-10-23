/*Day1 
/* The variables i,d and s are already decleared and initialized for you,you must
1. Declear 3 varibles: one of type int, one of type double and one of type string.
2. Read 3 lines of input from stdin and intialize your 3 variables
3. Print the sum of i plus your int variablke on a new line
4. Print the sum of d plus double variable to a scale of one decimal place on a new line.
5. Concatenate s with the string you read as input and print the result on a new line*/

/* Sample Input
12
4.0
is the best place to learn and practice coding!

Sample Output
16
8.0
HackerRank is the best place to learn and practice coding!
*/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank";

   // Declear the second integer, double, and string variables.
   int j;
   double e;
   string p;

   // Read from stdin and store the values in our variables.
   cin>> j;
   cin>> e;
   cin.get();
   getline(cin,p);

   //Reading done, now time to get the std out as asked int the question
   cout<< i+j <<endl;
   cout<< fixed<<setprecision(1)<<d+e<<endl;

   //concatenate and print the string variable on a new line
   string conc = s+p;

   cout<< conc <<endl;

   return 0; 
}