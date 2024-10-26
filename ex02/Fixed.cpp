#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->fixedPointValue = 0;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = n << fractionalBits;
}

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
    fixedPointValue = roundf(n * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& Fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = Fixed;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    fixedPointValue = raw;
}

Fixed& Fixed::operator=(const Fixed& Fix)
{
    std::cout << "Copy assignment operator called" << std::endl;
    fixedPointValue = Fix.fixedPointValue;
    return *this;
}

int Fixed::toInt() const {
    return fixedPointValue >> fractionalBits;
}

float Fixed::toFloat() const {
    return static_cast<float>(fixedPointValue) / (1 << fractionalBits);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {

    out << fixed.toFloat();

    return out;
}

bool Fixed::operator<(const Fixed& Fix) const{
    if (fixedPointValue < Fix.fixedPointValue)
        return 1;
    return 0;
}

bool Fixed::operator>(const Fixed& Fix) const{
    if (fixedPointValue > Fix.fixedPointValue)
        return 1;
    return 0;
}

bool Fixed::operator>=(const Fixed& Fix) const{
    if (fixedPointValue >= Fix.fixedPointValue)
        return 1;
    return 0;
}

bool Fixed::operator<=(const Fixed& Fix) const{
    if (fixedPointValue <= Fix.fixedPointValue)
        return 1;
    return 0;
}

bool Fixed::operator==(const Fixed& Fix) const{
    if (fixedPointValue == Fix.fixedPointValue)
        return 1;
    return 0;
}

bool Fixed::operator!=(const Fixed& Fix) const{
    if (fixedPointValue != Fix.fixedPointValue)
        return 1;
    return 0;
}

Fixed Fixed::operator+(const Fixed& Fix) const {
    return Fixed(this->toFloat() + Fix.toFloat());
}

Fixed Fixed::operator-(const Fixed& Fix) const {
    return Fixed(this->toFloat() - Fix.toFloat());
}

Fixed Fixed::operator*(const Fixed& Fix) const {
    return Fixed(this->toFloat() * Fix.toFloat());
}

Fixed Fixed::operator/(const Fixed& Fix) const {
    return Fixed(this->toFloat() / Fix.toFloat());
}

