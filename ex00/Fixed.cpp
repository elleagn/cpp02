/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 09:16:54 by gozon             #+#    #+#             */
/*   Updated: 2025/02/14 08:20:32 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : raw(0) {

    std::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed(const Fixed& fixed) : raw(fixed.raw) {

    std::cout << "Copy constructor called" << std::endl;

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
