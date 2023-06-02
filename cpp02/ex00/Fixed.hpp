#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed 
{
    private:
        int value;
        static int fract;
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &other);
		Fixed&	operator=(Fixed const &other);

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif