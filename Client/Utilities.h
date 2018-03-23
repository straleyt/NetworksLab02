/**
    CSCI 4761 Lab02
    clientAccount.h
    Purpose: 

    @author Tegan Straley
    @version 1.0 3/17/2018
*/

#include <string>

#ifndef CLIENT_UTILITIES_H
#define CLIENT_UTILITIES_H

std::string getUserName();
std::string getPassword();
std::string getName();
std::string getEmail();
std::string getPhone();
std::string getDate(std::string);
std::string getTime(std::string);
std::string getReason(std::string);

#endif //CLIENT_UTILITIES_H
