#pragma once

#include <iostream>
#include <cmath>

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
        Fixed &operator=(const Fixed &Fix);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt() const;
        float toFloat() const;

        bool operator<(const Fixed& Fix) const;
        bool operator>(const Fixed& fix) const;
        bool operator>=(const Fixed& Fix) const;
        bool operator<=(const Fixed& Fix) const;
        bool operator==(const Fixed& Fix) const;
        bool operator!=(const Fixed& Fix) const;

        Fixed operator+(const Fixed& Fix) const;
        Fixed operator-(const Fixed& Fix) const;
        Fixed operator*(const Fixed& Fix) const;
        Fixed operator/(const Fixed& Fix) const;

        Fixed operator++(Fixed& Fix);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
