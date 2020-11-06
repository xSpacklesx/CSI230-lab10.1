/**
* @file util.h
* @brief  function declarations
*
* @author Hunter Spack
* @assignment Lecture 10.1
* @date 11/5/2020
* @credits 
* 
*/
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