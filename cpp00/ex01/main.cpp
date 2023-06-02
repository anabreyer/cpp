#include "Phonebook.hpp"

int ft_atoi(const std::string& str)
{
    int r = 0;
    unsigned long i = 0;

    while (str[i] == ' ')
        i++;
    while (i < str.length() && isdigit(str[i]))
    {
        r = r * 10 + (str[i] + '0');
        i++;
    }
    return r;
}

int ft_stoi(const std::string& str)
{
    int r = 0;
    std::size_t i = 0;

    while (i < str.length() && std::isspace(str[i]))
        i++;
    while (i < str.length() && std::isdigit(str[i]))
    {
        r = r * 10 + (str[i] - '0');
        i++;
    }
    return r;
}



void ft_add(Phonebook *phonebook, int i)
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkerstsecret;

    std::cout << "Enter the contact's first name please:\n";
    std::getline(std::cin, firstname);
    if (std::cin.eof())
        return;
    std::cout << "Enter the contact's last name please:\n";
    std::getline(std::cin, lastname);
    if (std::cin.eof())
        return;
    std::cout << "Enter the contact's nickname please:\n";
    std::getline(std::cin, nickname);
    if (std::cin.eof())
        return;
    std::cout << "Enter the contact's phone number please:\n";
    std::getline(std::cin, phonenumber);
    if (std::cin.eof())
        return;
    std::cout << "Enter the contact's darkest secret please:\n";
    std::getline(std::cin, darkerstsecret);
    if (std::cin.eof())
        return;

    (*phonebook).create_contact(i, firstname, lastname, nickname, phonenumber, darkerstsecret);
}

void ft_search(Phonebook *phonebook, int i)
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
    //std::string u_index;
    int index;

    std::cout << std::endl;
    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
    for(int j = 1; j < i + 1; j++)
    {
        firstname = (*phonebook).firstname(j - 1);
        lastname = (*phonebook).lastname(j - 1);
        nickname = (*phonebook).nickname(j - 1);
        if(firstname.length() >= 10)
        {
            firstname.resize(9);
            firstname.resize(10, '.');
        }
        if(lastname.length() >= 10)
        {
            lastname.resize(9);
            lastname.resize(10, '.');
        }
        if(nickname.length() >= 10)
        {
            nickname.resize(9);
            nickname.resize(10, '.');
        }
       std::cout << std::setw(10) << j << "|" << std::setw(10) << firstname << "|" << std::setw(10) << lastname << "|" << std::setw(10) << nickname << "|" << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Please enter contact's index for more details: ";
    std::cin >> index;
    if (std::cin.eof())
        return ;
    if (index && index >= 1 && index <= i)
        (*phonebook).get_contact(index - 1).printbook();
    else
        std::cout << "Wrong index\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return ;
}

int main (void)
{
    std::string u_cmd;
    Phonebook phonebook;
    int i;
    int j;

    i = 0;
    j = 0;
    while (!std::cin.eof())
    {
        std::cout << "Please enter a command (SEARCH / ADD / EXIT)\n> ";
		std::getline(std::cin, u_cmd);
        if (u_cmd == "EXIT")
            return (0);
        else if (u_cmd == "ADD")
        {
            if (i >= 8)
                i = 0;
            else
            {
                ft_add(&phonebook, i);
                i++;
                j++;
                if (j >= 8)
                    j = 8;
            }
        }
        else if (u_cmd == "SEARCH")
            ft_search(&phonebook, j);
        else
			if (!std::cin.eof())
				std::cout << "Only ADD, SEARCH and EXIT commands are accepted\n";
    }
    return (0);
}