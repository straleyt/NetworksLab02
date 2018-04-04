/**
    CSCI 4761 Lab02
    clientAccount.h
    Purpose: .h for clientAccount.cpp

    @author Tegan Straley
    @version 1.0 3/17/2018
*/

#ifndef SERVER_clientAccount_H
#define SERVER_clientAccount_H

#include <string>
#include <map>

struct userAppointment{
    std::string username;
    std::string date;
    std::string reason;
    std::string time;
};

class clientAccount {


private:
    std::string username;
    std::string password;
    std::string name;
    std::string phone;
    std::string email;
    std::map<std::string, userAppointment> appointmentTable;
    int REASON_POS;
    int USERNAME_POS;
    int DATE_POS;
    int TIME_POS;

public:
    std::string REASON;
    std::string DATE;
    std::string TIME;

    void populate(std::string username);
    bool exists(std::string username);

    void removeAppointment(std::string username, std::string date, std::string time);
    std::string sendAllAppointments(std::string username);
    std::string readPassword(std::string);

    //User
    std::string EMAIL;
    std::string NAME;
    std::string PHONE;

    void print();
    void write();
    void remove();
    std::string readAppointment(std::string date, std::string time);
    int conflictCheck(std::string date, std::string time, std::string username);
    void createAppointment(std::string username, std::string reason, std::string date, std::string time);
    std::string rangeReturnAppointments(std::string start, std::string end);


	clientAccount(){
		USERNAME_POS = 0;
		REASON_POS = 1;
		DATE_POS = 2;
		TIME_POS = 3;
		std::string REASON = "reason";
		std::string DATE = "date";
		std::string TIME = "time";
	    //User
		std::string EMAIL = "email";
		std::string NAME = "name";
		std::string PHONE = "phone";
	}

    const std::string &getUsername() const {
        return username;
    }

    void setUsername(const std::string &username) {
        clientAccount::username = username;
    }

    const std::string &getPassword() const {
        return password;
    }

    void setPassword(const std::string &password) {
        clientAccount::password = password;
    }

    const std::string &getName() const {
        return name;
    }

    void setName(const std::string &name) {
        clientAccount::name = name;
    }

    const std::string &getPhone() const {
        return phone;
    }

    void setPhone(const std::string &phone) {
        clientAccount::phone = phone;
    }

    const std::string &getEmail() const {
        return email;
    }

    void setEmail(const std::string &email) {
        clientAccount::email = email;
    }
};


#endif //SERVER_clientAccount_H
