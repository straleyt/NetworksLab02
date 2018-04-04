/**
    CSCI 4761 Lab02
    outputStrings.h
    Purpose: The output strings the server displays to the client

    @author Tegan Straley
    @version 1.0 3/17/2018
*/

//Login Menus
std::string login = "Please make a selecion\n"
        "A: Login\n"
        "B: Create account\n";

std::string menu = "Please make a selection:\n"
        "A: Update name\n"
        "B: Update password\n"
        "C: Update phone number\n"
        "D: Update email\n"
        "E: Delete (current) user\n"
        "F: Add new appointment\n"
        "G: Remove an appointment\n"
        "H: Update an existing appointment\n"
        "I: Display appointment at a time\n"
        "J: Display appointments in a time range\n"
		"K: Help\n"
        "L: Exit\n";
std::string usernameRequest = "";

//"A: Update name, password, contact phone number, and email\n"
std::string modificationMenu = "Please select what you would like to update:\n"
        "A: Name\n"
        "B: Password\n"
        "C: Phone Number\n"
        "D: Email\n\n";
std::string modification = "Please enter new value: \n";
std::string modSuccess = "Value successfully updated\n";

//"B: Delete a user\n"
std::string check = "Are you sure you wish to delete your account? (Y/N) \n";
std::string delSuccess = "Account deleted. Ending program.\n";

//"C: Add a new appointment\n"
std::string appDate = "Enter the date of the new appointment:\n";
std::string appTime = "Enter the time of the new appointment:\n";
std::string appReason = "Enter the reason for the new appointment:\n";

//"D: Remove an appointment\n"
std::string removeDate = "Enter the date of the appointment to remove:\n";
std::string removeTime = "Enter the time of the appointment to remove:\n";

//"E: Update an existing appointment\n"
std::string oldDate = "Enter the OLD date of the appointment to update:\n";
std::string oldTime = "Enter the OLD time of the appointment to update:\n";
std::string newDate = "Enter the NEW date of the appointment to update:\n";
std::string newTime = "Enter the NEW time of the appointment to update:\n";
std::string newReason = "Enter the reason for the updated appointment\n";

//"G: Display a user’s the appointment for a specific time or a time range\n"
std::string timeChoice = "Please select an option: \n"
        "A: Display appointment at a specific time\n"
        "B: Display appointments in a specific time range\n\n";

//"H: Exit"
std::string appExit = "Good Bye\n\n";

//"K: Help"
std::string help = "Menu listings & usage\n\n"
        "A: -- type in new name & press enter\n"
        "B: -- type in new password & press enter\n"
        "C: -- type in new phone number & press enter\n"
        "D: -- type in new email & press enter\n"
        "E: -- type in Y or N to delete (current) user\n"
        "F: -- add new appt by entering mm/dd/yyyy, hh:mm, & reason \n"
        "G: -- specify which appt to remove, press enter\n"
        "H: -- specify which appt to update, press enter\n"
        "I: -- specify which appt to display then press enter\n"
        "J: -- specify between 2 dates (mm/dd/yyyy format) to display then press enter\n";
