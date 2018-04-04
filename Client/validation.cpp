5/**
    CSCI 4761 Lab02
    validation.cpp
    Purpose: Validates the answers given in by the client before being sent to the server

    @author Tegan Straley
    @version 1.0 3/17/2018
*/

#include <iostream>
#include <regex>
#include "validation.h"

std::string getUserName() {
    bool validated = false;
    std::string input;
    while(!validated){
        std::cout << "Please enter username\n";
        std::getline(std::cin, input);
        if (input.find(";") != std::string::npos) {
            std::cout << "Username cannot contain the ; character" << '\n';
        }else{
            validated = true;
        }
    }
    return input;
}

std::string getPassword() {
    bool validated = false;
    std::string input;
    while(!validated){
        std::cout << "Please enter password\n";
        std::getline(std::cin, input);
        if (input.find(";") != std::string::npos) {
            std::cout << "Password cannot contain the ; character" << '\n';
        }else{
            validated = true;
        }
    }
    return input;
}

std::string getDate(std::string dateType) {
    bool validated = false;
    std::string input;
    while(!validated){
        if(!dateType.compare("OLD")){
            std::cout << "Enter old appointment date in the format mm/dd/yyyy\n";
        }else if(!dateType.compare("UPDATE")){
            std::cout << "Enter updated new appointment date in the format mm/dd/yyyy\n";
        }else if(!dateType.compare("START")){
            std::cout << "Enter the starting date in the format mm/dd/yyyy\n";
        }else if(!dateType.compare("END")){
            std::cout << "Enter the ending date in the format mm/dd/yyyy\n";
        }else {
            std::cout << "Enter new appointment date in the format mm/dd/yyyy\n";
        }
        std::getline(std::cin, input);

		if (input[2] != '/' || input[5] != '/' || input.length() != 10 ) {
            std::cout << "Date must be in mm/dd/yyyy format please try again" << '\n';
        }else{
            validated = true;
        }
    }
    return input;
}

std::string getTime(std::string timeType) {
    bool validated = false;
    std::string input;
    while(!validated){
        if(!timeType.compare("OLD")){
            std::cout << "Enter old appointment time in the format hh:mm using the 24 hour clock\n";
        }else if(!timeType.compare("UPDATE")){
            std::cout << "Enter updated appointment time in the format hh:mm using the 24 hour clock\n";
        }else if(!timeType.compare("START")){
            std::cout << "Enter starting time in the format hh:mm using the 24 hour clock\n";
        }else if(!timeType.compare("END")){
            std::cout << "Enter ending time in the format hh:mm using the 24 hour clock\n";
        }else {
            std::cout << "Enter new appointment time in the format hh:mm using the 24 hour clock\n";
        }
        std::getline(std::cin, input);
        
        if ( input[2] != ':' || input.length() != 5) {
            std::cout << "Date must be in hh:mm format please try again" << '\n';
        }else{
            validated = true;
        }
    }
    return input;
}

std::string getReason(std::string dateType) {
    bool validated = false;
    std::string input;
    while(!validated){
        if(!dateType.compare("OLD")){
            std::cout << "Enter old appointment reason\n";
        }else if(!dateType.compare("UPDATE")){
            std::cout << "Enter updated appointment reason\n";
        }else {
            std::cout << "Enter new appointment reason\n";
        }
        std::getline(std::cin, input);
        if (input.find(";") != std::string::npos) {
            std::cout << "Your appointment reason cannot contain the ; character" << '\n';
        }else{
            validated = true;
        }
    }
    return input;
}


std::string getName() {
    bool validated = false;
    std::string input;
    while(!validated){
        std::cout << "Enter name\n";
        std::getline(std::cin, input);
        if (input.find(";") != std::string::npos) {
            std::cout << "Your name cannot contain the ; character" << '\n';
        }else{
            validated = true;
        }
    }
    return input;
}

std::string getEmail() {
    bool validated = false;
    std::string input;
    while(!validated){
        std::cout << "Enter your email\n";
        std::getline(std::cin, input);
        if (input.find(";") != std::string::npos) {
            std::cout << "Your email cannot contain the ; character" << '\n';
        }else{
            validated = true;
        }
    }
    return input;
}


std::string getPhone() {
    bool validated = false;
    std::string input;
    while(!validated){
        std::cout << "Enter phone number (only 10 digits ex. 7205565506)\n";
        std::getline(std::cin, input);
		if (input.length() != 10) {
            std::cout << "Your phone can only consist of 10 digits" << '\n';
        }else{
            validated = true;
        }
    }
    return input;
}

