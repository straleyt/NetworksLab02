/**
    CSCI 4761 Lab02
    clientAccount.cpp
    Purpose: 

    @author Tegan Straley
    @version 1.0 3/17/2018
*/

#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
#include "clientAccount.h"


void clientAccount::populate(std::string username) {
    std::ifstream infile( username + ".txt");
    std::getline(infile, this->username);
    std::getline(infile, this->password);
    std::getline(infile, this->name);
    std::getline(infile, this->phone);
    std::getline(infile, this->email);

    std::string entry;
    while(std::getline(infile, entry)){

        std::stringstream stream(entry);
        std::vector<std::string> fields;
        std::string token;

        while(std::getline(stream, token, ';')){
            fields.push_back(token);
        }

        userAppointment newAppointment;

        newAppointment.username = fields[USERNAME_POS];
        newAppointment.date = fields[DATE_POS];
        newAppointment.time = fields[TIME_POS];
        newAppointment.reason = fields[REASON_POS];

        appointmentTable[fields[DATE_POS]+fields[TIME_POS]] = newAppointment;

    }

    infile.close();
}


void clientAccount::print() {

    std::cout << this->username << "\n" << this->password <<  "\n" << this->name << "\n" << this->phone << "\n"
    << this->email << "\n";
    for(std::pair<std::string , userAppointment>  i: appointmentTable){
        std::cout << i.second.date << " " << i.second.time << " " << i.second.reason << "\n";
    }
}

void clientAccount::write() {

    std::ofstream ofstream(this->username + ".txt");
    ofstream << this->username << "\n" << this->password <<  "\n" << this->name << "\n" << this->phone << "\n"
    << this->email << "\n";
    for(std::pair<std::string , userAppointment>  i: appointmentTable){
        ofstream << this->username << ";" << i.second.reason << ";" << i.second.date << ";" << i.second.time << "\n";
    }
    ofstream.close();
}


std::string clientAccount::readPassword(std::string) {
    return this->password;
}


bool clientAccount::exists(std::string username) {
    std::ifstream infile(username+".txt");
    return infile.is_open();
}


void clientAccount::remove() {
    std::string fileName = this->username + ".txt";
    std::remove(fileName.c_str());
}


int clientAccount::conflictCheck(std::string date, std::string time, std::string username) {
    return appointmentTable.count(date+time);
}


void clientAccount::createAppointment(std::string username, std::string reason, std::string date, std::string time) {
    appointmentTable[date+time].reason = reason;
    appointmentTable[date+time].date = date;
    appointmentTable[date+time].time = time;
    appointmentTable[date+time].username= username;
}


void clientAccount::removeAppointment(std::string username, std::string date, std::string time) {
    appointmentTable.erase(date+time);
}


std::string clientAccount::sendAllAppointments(std::string username) {
    std::string appointments;
    for(std::pair<std::string, userAppointment> appointment : appointmentTable ){

        appointments += (appointment.second.reason + " on " + appointment.second.date
                         + " at " + appointment.second.time + "\n");
    }

    return appointments;}


std::string clientAccount::readAppointment(std::string date, std::string time) {

    return "On " + this->appointmentTable[date+time].date +" at " +
            this->appointmentTable[date+time].time + " for " +
            this->appointmentTable[date+time].reason;

}


std::string clientAccount::rangeReturnAppointments(std::string start, std::string end) {
    std::string appointments = "";
    std::stringstream startStream(start);
    std::stringstream endStream(end);
    std::string startMonth;
    std::string endMonth;
    std::string startDay;
    std::string endDay;
    std::string startYear;
    std::string endYear;

    std::getline(startStream, startMonth, '/');
    std::getline(startStream, startDay, '/');
    std::getline(startStream, startYear);

    std::getline(endStream, endMonth, '/');
    std::getline(endStream, endDay, '/');
    std::getline(endStream, endYear);

    int startDate = std::stoi(startDay) + std::stoi(startMonth) * 100 + std::stoi(startYear) *10000;
    int endDate = std::stoi(endDay) + std::stoi(endMonth) * 100 + std::stoi(endYear) *10000;

    for(std::pair<std::string, userAppointment> appointment : this->appointmentTable ){
        std::stringstream date(appointment.second.date);
        std::string day;
        std::string month;
        std::string year;

        std::getline(date, month, '/');
        std::getline(date, day, '/');
        std::getline(date, year);

        int dateValue = std::stoi(day) + std::stoi(month) * 100 + std::stoi(year) *10000;

        if(dateValue >= startDate && dateValue <= endDate){
            appointments += (appointment.second.reason + " on " + appointment.second.date
                             + " at " + appointment.second.time + "\n");
        }

    }
    std::cout << appointments;
    return appointments;}





