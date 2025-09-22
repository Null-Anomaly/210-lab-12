/*Comsc 210 | Lab 12 | Lawrence Bryant
IDE used: VSC*/

#include <iostream>
#include <algorithm>  // for sort(), find()
#include <numeric>    // for accumulate()
#include <array>
#include <fstream>
#include <string>
using namespace std;

const int SIZE = 30;

int main()
{
    ifstream fin;
    fin.open("Test_Data.txt");
    string feed = "Fail";
    array<string, SIZE> fullList;

    if(fin.good())
    {
        for(int i = 0; i < SIZE; i++)
        {
            getline(fin,feed);
            fullList[i] = feed;
        }
        
        fin.close( );         
    }
    else
    {
        cout << "File not found.\n";
    }
    
}