#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>

using namespace std;

PhoneBook::PhoneBook(){
    current_index = 0;
}

PhoneBook::~PhoneBook(){
}


#define MAX_CONTACTS 2
void PhoneBook::add_person_to_phonebook(Person& person)
{
    peoples_info[current_index % MAX_CONTACTS] = person;
    if (current_index < MAX_CONTACTS){
        current_index++;
    }
}

// bu fonksiyon aracılığıyla hpp dosyaları birbirlerinin verilerine
// erişebilirler.
void PhoneBook::init_Start(void){
    Person person;
    Contact contacts;
    person = contacts.Get_contact_from_cin();
    add_person_to_phonebook(person);
}

void PhoneBook::Welcome_print()
{
        string commands[] = {"ADD", "SEARCH", "EXIT"};
        string colors[] = {"\033[31m", "\033[32m", "\033[33m", "\033[34m", "\033[35m", "\033[36m"};

        cout << "\033[34mPlease enter a command: \033[0m";
        for (int i = 0; i < sizeof(commands)/sizeof(commands[0]); i++) {
            cout << colors[i % (sizeof(colors)/sizeof(colors[0]))] << commands[i] << "\033[0m" << " ";
        }
        cout << endl;
}

void PhoneBook::contact_saved_messages()
{
    cout << "\033[38;5;208m\nProccess loading...\033[0m" << endl;
    cout << "\033[36m\nContact added\033[0m" << endl;
}


void PhoneBook::print_all_contacts()
{
    cout << "Printing all contacts" << endl;
    for (int i = 0; i < current_index; i++)
    {
        cout << "Contact " << i << endl;
        cout << "First name: " << peoples_info[i].firstName << endl;
        cout << "Last name: " << peoples_info[i].lastName << endl;
        cout << "Nick name: " << peoples_info[i].nickName << endl;
        cout << "Phone number: " << peoples_info[i].phoneNumber << endl;
        cout << "Darkest secret: " << peoples_info[i].darkestSecret << endl;
    }
}


void PhoneBook::print_short_if_too_long(string str)
{
    if (str.length() > 10)
        cout << str.substr(0, 9) << "." << "|";
    else
        cout << setw(10) << str << "|";
}

void PhoneBook::print_all_contacts_but_with_table_format()
{
int j = 0;

    cout << "\033[38;5;208m\n----------------- PHONBOOK CONTACTS -----------------\033[0m" << endl;
    for (int i = 0; i < current_index; i++)
    {
        if (peoples_info[i].firstName.length() == 0)
            return (void)(cout << "\033[31mNo contacts saved.\033[0m" << endl);

            cout << "| " << setw(10) << i << " | ";
            print_short_if_too_long(peoples_info[i].firstName);
            print_short_if_too_long(peoples_info[i].lastName);
            print_short_if_too_long(peoples_info[i].nickName); 
            cout << endl;
    }
    cout << "\033[38;5;208m-----------------------------------------------------\033[0m" << endl;
}

#include <limits>
void PhoneBook::search_contact()
{
    int index;

    cout << "\033[34menter the index of the contact you want to search: \033[0m";
    while (!(cin >> index))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid index. Please enter a valid index: ";
    }
        if (index < 0 || index >= current_index) {
            cout << "\033[31mError: Index out of range.\033[0m" << endl;
            } 
        else {

            cout << "\033[35m---->> CONTACT #" << index << " <<----\033[0m" << endl;
            if (!peoples_info[index].firstName.empty())
                cout << "\033[38;5;208mFirst name: " << peoples_info[index].firstName << endl;
            if (!peoples_info[index].lastName.empty())
                cout << "Last name: " << peoples_info[index].lastName << endl;
            if (!peoples_info[index].nickName.empty())
                cout << "Nick name: " << peoples_info[index].nickName << endl;
            if (!peoples_info[index].phoneNumber.empty())
                cout << "Phone number: " << peoples_info[index].phoneNumber << endl;
            if (!peoples_info[index].darkestSecret.empty())
                cout << "Darkest secret: " << peoples_info[index].darkestSecret << endl;
        }
}
