/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 09:16:54 by gozon             #+#    #+#             */
/*   Updated: 2025/02/03 13:24:40 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::fract_size = 7;

Fixed::Fixed() : raw(0) {

    std::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed(const Fixed& fixed) : raw(fixed.raw) {

    std::cout << "Copy constructor called" << std::endl;

}

Fixed::Fixed(int const number) {

    long long tmp;

    std::cout << "Int constructor called" << std::endl;
    tmp = number << this->fract_size;
    if (tmp > INT_MAX || tmp < INT_MIN) {
        std::cout << "Integer overflow" << std::endl;
    }
    else {
        this->raw = tmp;
    }
}

Fixed::Fixed(float const number) {

    float tmp;

    std::cout << "Float constructor called" << std::endl;
    tmp = number * (1 << this->fract_size);
    if (tmp > 2147483647.0 || tmp < -2147483648.0) {
        std::cout << "Integer overflow (float)" << std::endl;
    }
    else {
        this->raw = roundf(tmp);
    }
}

Fixed& Fixed::operator=(const Fixed& fixed) {

    this->raw = fixed.raw;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);

}

Fixed::~Fixed() {

    std::cout << "Destructor called" << std::endl;

}

int Fixed::getRawBits(void) const {

    std::cout << "getRawBits member function called" << std::endl;
    return (this->raw);

}

void Fixed::setRawBits(int const raw) {

    std::cout << "setRawBits member function called" << std::endl;
    this->raw = raw;

}

float Fixed::toFloat(void) const {

    float result;

    result = (float)this->raw;
    result = result / (1 << this->fract_size);
    return (result);
}

int Fixed::toInt(void) const {

    return (this->raw >> this->fract_size);

}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {

    out << fixed.toFloat();
    return (out);

}
