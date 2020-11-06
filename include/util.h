#ifndef UTIL_H
#define UTIL_H

#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

std::string randomElement(std::vector <std::string> stringVector);

double sum(std::vector <double> doubleVector);
double avg(std::vector <double> doubleVector);
double lowest(std::vector <double> doubleVector);

void camelCase(std::string& strInput);

#endif