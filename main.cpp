/*Comsc 210 | Lab 12 | Lawrence Bryant
IDE used: VSC*/

#include <iostream>
#include <algorithm>  
#include <numeric>    
#include <array>
#include <fstream>
#include <string>
using namespace std;

//The number of entries
const int SIZE = 30;

//The program main
int main()
{
    //Not sure what ifstream fin actually does. Fin.open selects to file to choose from
    //Handles array creation
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
            cout << fullList[i] << "\n";
        }
        
        fin.close( );         
    }
    else
    {
        cout << "File not found.\n";
    }

    string hunt = "pen";
    array<string, SIZE>::iterator finder;
    finder = find(fullList.begin(), fullList.end(), hunt);
    cout << "The word " << hunt << " was found\n";

    cout << "The array is " << fullList.size() << " elements long";
    cout << "Element 5 is " << fullList[4] << "\n";
    cout << "The front and back elements are: " << fullList.front() << " and " << fullList.back() << "\n";
    
}