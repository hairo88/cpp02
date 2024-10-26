#pragma once

class Fixed {
    private:
        int fixedPointValue;
        static const int fractionalBits;
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        ~Fixed();
        Fixed &operator=(const Fixed &fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};
