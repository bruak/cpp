#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook Pb;
    
    cout << "\033[38;5;208m\n📞----------------- WELCOME TO PHONEBOOK -----------------📞\033[0m" << endl;
    Pb.Welcome_print();
    string command;
    while (1)
    {
        getline(cin, command);
        cout << "> " << std::flush;
        if (command == "ADD")
        {
            Pb.init_Start();
            Pb.contact_saved_messages();
            Pb.Welcome_print();
        }
        else if (command == "SEARCH")
        {
            Pb.print_all_contacts_but_with_table_format();
            Pb.search_contact();
            Pb.Welcome_print();
        }
        else if (command == "EXIT")
        {
            cout << "Aborting..";
            break;
        }
    }
    return 0;
}
