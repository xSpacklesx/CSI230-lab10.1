/**
* @file main.cpp
* @brief  Week 10, C++ lab
*
* @author Hunter Spack
* @assignment Lecture 10.1
* @date 11/5/2020
* @credits 
* 
*/

#include <iostream>
#include <vector>
#include "util.h"

using namespace std;

int main()
{
    cout << "Howdy Partner" << endl;
    
    vector <std::string> strVect {"string the first", "string two", "third string", "string numero four", "string five aka last one"};

    cout << "String Vector size: " << strVect.size() << endl;

    cout << "Random element of String Vector:" << randomElement(strVect) << endl;
    cout << "Random element of String Vector:" << randomElement(strVect) << endl;
    cout << "Random element of String Vector:" << randomElement(strVect) << endl;

    vector <double> doubVect {5.23, 23.55, 13.6, 197.837, 72.34};

    cout << "Double Vector is: ";

    for(double d: doubVect)
    {
        cout << d << ", ";
    }    

    cout << endl;

    cout << "Sum of doubVect is: " << sum(doubVect) << endl;
    cout << "Average of doubVect is: " << avg(doubVect) << endl;
    cout << "Lowest in the doubVect is: " << lowest(doubVect) << endl;

    string multiWord = "I am writing a string of words dog";

    cout << multiWord << endl;
    
    camelCase(multiWord);
    cout << multiWord << endl;

    return EXIT_SUCCESS;
}