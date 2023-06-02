#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
    private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    public:
    Contact();
    ~Contact();

    void printbook(void)const;
    void set_values(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);

    std::string get_firstname() const;
    std::string get_lastname() const;
    std::string get_nickname() const;
    std::string get_phonenumber() const;
    std::string get_darkestsecret() const;
};

#endif