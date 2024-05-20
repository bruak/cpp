#include <iostream>

class Fixed
{
    private:
        int _value;
        static const int _fractional_bits = 8;
    public:
        Fixed();
        Fixed(Fixed const &src);
        Fixed(int const n);
        Fixed(float const n);
        ~Fixed();
        
        Fixed &operator=(Fixed const &src);
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &src);
