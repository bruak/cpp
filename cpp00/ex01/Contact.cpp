#include "Contact.hpp"
#include <iostream>

Contact::Contact() {}

Contact::~Contact() {}

std::string Contact::getInput(const std::string& prompt) {
    std::string input;
    std::cout << prompt;
    if (prompt == "Enter phone number: ") {
        std::getline(std::cin, input);
        while (if_not_digit(input)) {
            std::cout << "Please enter a valid phone number: ";
            std::getline(std::cin, input);
        }
        return input;
    }
    std::getline(std::cin, input);
    return input;
}

void Contact::Get_contact_from_cin() {
    this->firstName = getInput("Enter first name: ");
    this->lastName = getInput("Enter last name: ");
    this->nickName = getInput("Enter nickname: ");
    this->phoneNumber = getInput("Enter phone number: ");
    this->darkestSecret = getInput("Enter darkest secret: ");
}

int Contact::if_not_digit(const std::string& phone_number){
    bool all_digits = true;
    for (size_t i = 0; i < phone_number.length(); i++) {
       if (!isdigit(phone_number[i]) && ispunct(phone_number[i]) && !isspace(phone_number[i]))
        {
            all_digits = false;
            break;
        }
    }
    return all_digits ? 0 : 1;
}

