/*Comsc 210 | Lab 12 | Lawrence Bryant
IDE used: VSC*/

#include <iostream>
#include <algorithm>  // for sort(), find()
#include <numeric>    // for accumulate()
#include <array>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("Test_Data.txt");
    string test = "Fail";

    if(fin.good())
    {
        getline(fin,test);
        cout << test;
        fin.close( );         
    }
    else
    {
        cout << "File not found.\n";
    }
    
}