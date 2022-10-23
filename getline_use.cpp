#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string name;
    cout<<"Enter you Name: " <<endl;
    getline(cin,name);

    int age;
    cout<<"Enter you Age: "<<endl;
    cin>> age;

if (age> 18);
    {
    cout<<"Hello," <<name << "You are eligible to vote. \n";
    }
 else
    {
    cout<<"Hello," <<name << "You are not eligible to vote. \n";
    }
return 0;
    
}