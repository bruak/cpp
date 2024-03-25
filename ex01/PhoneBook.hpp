#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>

class PhoneBook
{
private:
    Person peoples_info[8];
    int current_index;
public:
        PhoneBook() :  current_index(0) {}
        ~PhoneBook();


        void Get_contact_from_cin();
        void add_contact(Person& person);
        //control
        int  if_not_digit(string phone_number);
        string getInput(const string& prompt);
        void print_all_contacts();
        //*

        void print_all_contacts_but_with_table_format();
        void print_short_if_too_long(string str);
        
        // just a message
        void contact_saved_messages();
        void Welcome_print();
        void search_contact();
} ;

#endif

/*          YAPILACKALAR
*   PhoneBook.cpp ve PhoneBook.hpp dosyaları sadece kaydedilmiş kişileri bulmak için kullanılacak. 
*/