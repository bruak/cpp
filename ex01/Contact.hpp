#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

#define cout std::cout
#define cin std::cin
#define endl std::endl
#define string std::string

using namespace std;


class Person {
    public:
        string firstName;
        string lastName;
        string nickName;
        string phoneNumber;
        string darkestSecret;
};

class Contact {
    public:
        Contact();
        ~Contact();

        string getInput(const string& prompt);
        Person Get_contact_from_cin();
        int  if_not_digit(string phone_number);
} ;

#endif