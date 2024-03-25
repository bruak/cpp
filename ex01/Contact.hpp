#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

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
} ;

#endif