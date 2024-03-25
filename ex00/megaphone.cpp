#include <iostream>
#include <string>

#define NON_ARG_MESSAGE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"
#define cout std::cout
#define string std::string

void    megaphone(char *str)
{
    int i = 0;
    while (str[i])
    {
        cout << (char)toupper(str[i]);
        i++;
    }
    cout << std::endl;
}

void append_all_av(int ac, string &mystring, char **av)
{
    for (int i = 1; i < ac; i++)
        mystring.append(string(av[i]));
}

int main(int ac, char **av)
{
    string mystring ;

   if (ac == 1)
       cout << NON_ARG_MESSAGE << std::endl;
   else
       append_all_av(ac, mystring, av);
    megaphone(&mystring[0]);
    return 0;
}
