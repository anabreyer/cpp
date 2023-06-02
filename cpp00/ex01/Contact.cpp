#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void Contact::printbook(void)const
{
    std::cout << "First name: " << this->firstName << std::endl;
    std::cout << "Last name: " << this->lastName << std::endl;
    std::cout << "Nickname name: " << this->nickname << std::endl;
    std::cout << "Phone number: " << this->phoneNumber << std::endl;
    std::cout << "Darkest secret: " << this->darkestSecret << std::endl;
}

void Contact::set_values(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
    firstName = fn;
    lastName = ln;
    nickname = nn;
    phoneNumber = pn;
    darkestSecret = ds;
}

std::string Contact::get_firstname() const
{
    return (firstName);
}

std::string Contact::get_lastname() const
{
    return(lastName);
}

std::string Contact::get_nickname() const
{
    return (nickname);
}

std::string Contact::get_phonenumber() const
{
    return (phoneNumber);
}

std::string Contact::get_darkestsecret() const
{
    return (darkestSecret);
}

