#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed 
{
    private:
        int value;
        static const int fract;

    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &other);
        Fixed(int const n);
		Fixed(float const n);

		Fixed&	operator=(Fixed const &other);
        Fixed	operator+(Fixed const &other) const;
        Fixed	operator-(Fixed const &other) const;
        Fixed	operator*(Fixed const &other) const;
        Fixed	operator/(Fixed const &other) const;
        bool	operator<(Fixed const &other) const;
        bool	operator>(Fixed const &other) const;
        bool	operator==(Fixed const &other) const;
        bool	operator!=(Fixed const &other) const;
        bool	operator>=(Fixed const &other) const;
        bool	operator<=(Fixed const &other) const;

        Fixed&	operator++(void);
        Fixed&	operator--(void);
        Fixed	operator++(int n);
        Fixed	operator--(int n);
        
        static const Fixed &min(Fixed const &copy1, Fixed const &copy2);
        static const Fixed &max(Fixed const &copy1, Fixed const &copy2);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed);

#endif