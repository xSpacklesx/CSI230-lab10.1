/**
* @file util.cpp
* @brief  function definitions
*
* @author Hunter Spack
* @assignment Lecture 10.1
* @date 11/5/2020
* @credits 
* 
*/
#include "util.h"


//pre double vector
//post the average
//purpose get the average of a vector of doubles
double avg(std::vector <double> doubleVector)
{

    double avg = 0;

    for(double d: doubleVector)
    {
        avg += d;
    }

    avg = (avg / doubleVector.size());

    return(avg);

}


//pre string reference
//post camel cased string
//purpose to convert a string to camel case
void camelCase(std::string& strInput)
{
    std::string empty = "";

    for (int i = 0; i < strInput.size(); i++)
    {
        if(isspace(strInput[i]))
        {
            strInput[i] = empty[0];
            strInput[i+1] = toupper(strInput[i+1]);
        }
    }
    

}


//pre double vector
//post lowest element of the vector
//purpose to fint the lowest element
double lowest(std::vector <double> doubleVector)
{
    double min = __DBL_MAX__;
    
    for( double d: doubleVector)
    {
        if (d < min)
        {
            min = d;
        }
    }
    
    return(min);

}


//pre vector of strings
//post a random string element from the vector
//purpose to return a random element
std::string randomElement(std::vector <std::string> stringVector)
{
    srand(time(NULL));
    int randNum = (rand() % stringVector.size());

    return stringVector[randNum];
}


//pre double vector
//post sum of the vector's doubles
//purpose sum a vector of doubles
double sum(std::vector <double> doubleVector)
{
    
    double sum = 0;
    for (double d: doubleVector)
    {

        sum += d;

    }
    
    return (sum);

}