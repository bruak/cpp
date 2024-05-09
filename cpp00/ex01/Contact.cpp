#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact() {}

Contact::~Contact() {}

string Contact::getInput(const string& prompt) {
    string input;
    do {
        cout << prompt;
        getline(cin, input);
    } while (input.empty());
    return input;
}

int Contact::if_not_digit(string phone_number)
{
    for (int i = 0; phone_number[i] != '\0'; i++)
    {
        if (!isdigit(phone_number[i]))
        {
            cout << "\033[31mPhone number is not valid\033[0m" << endl;
            return 1;
        }
    }
    return 0;
}

Person Contact::Get_contact_from_cin()
{
    Person person;
    person.firstName = getInput("Enter first name: ");
    person.lastName = getInput("Enter last name: ");
    person.nickName = getInput("Enter nick name: ");
    do {
        person.phoneNumber = getInput("Enter phone number: ");
    } while (if_not_digit(person.phoneNumber));
    person.darkestSecret = getInput("Enter darkest secret: ");
    return person;
}
