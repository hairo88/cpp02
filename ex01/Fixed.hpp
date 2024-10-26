#pragma once

#include <iostream>
#include <tgmath.h>

class Fixed {
    private:
        int fixedPointValue;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float n);
        Fixed(const Fixed &fixed);
        ~Fixed();
        Fixed &operator=(const Fixed &fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt() const;
        float toFloat() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

