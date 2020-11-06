#include "util.h"


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

std::string randomElement(std::vector <std::string> stringVector)
{
    srand(time(NULL));
    int randNum = (rand() % stringVector.size());

    return stringVector[randNum];
}

double sum(std::vector <double> doubleVector)
{
    
    double sum = 0;
    for (double d: doubleVector)
    {

        sum += d;

    }
    
    return (sum);

}