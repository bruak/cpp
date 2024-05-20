#include <iostream>

// ondalıklı sayılarda sayıyı 2'ye bölmek demek
// bitleri 1 sağa kaydırmak demek

// normal int olarak temsil bir sayı
/*
If we treat this bit patter as integer, it represents the number:

    101102
    = 1 * 24 + 1 * 22 + 1 * 21

    = 16 + 4 + 2

    = 22
*/

// fixed olarak alınan bir sayı
/*
    00010.1102
    = 1 * 21 + 1 * 2-1 + 1 * 2-1
    
    = 2 + 0.5 + 0.25
    
    = 2.75
*/

class Fixed {
    private:
        int fixedValue;
        static const int fractionalBits = 8;

    public:
        Fixed();
        Fixed(const Fixed &fixed);
        
        ~Fixed();


        Fixed &operator = (const Fixed &fixed);
        
        int getRawBits(void) const;
        
        void setRawBits(int const raw);
};