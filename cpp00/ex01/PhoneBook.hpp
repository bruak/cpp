#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>

#define cout std::cout
#define cin std::cin
#define endl std::endl
#define string std::string


class PhoneBook
{
private:
    Person  peoples_info[8];
    int current_index;
public:
    PhoneBook();
    ~PhoneBook();

    void print_all_contacts();

    void print_all_contacts_but_with_table_format();
    void print_short_if_too_long(string str);
    
    void contact_saved_messages();
    void Welcome_print();
    void search_contact();
    void init_Start(void);

    void add_person_to_phonebook(Person& person);
};

#endif
