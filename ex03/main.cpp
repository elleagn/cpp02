/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:11:01 by gozon             #+#    #+#             */
/*   Updated: 2025/02/05 11:13:51 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iomanip>

void testComparisons(void) {

    const Fixed a(0.00390625f);
    const Fixed b(0.0078125f);
    Fixed c(a);

    std::cout << "\na is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl << std::endl;

    std::cout << "a > b: ";
    if (a > b) {
        std::cout << "true";
    }
    else {

        std::cout << "false";
    }
    std::cout << " expected false" << std::endl;
    std::cout << "a < b: ";
    if (a < b) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    std::cout << " expected true" << std::endl;
        std::cout << "a >= b: ";
    if (a >= b) {
        std::cout << "true";
    }
    else {

        std::cout << "false";
    }
    std::cout << " expected false" << std::endl;
    std::cout << "a <= b: ";
    if (a <= b) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    std::cout << " expected true" << std::endl;
    std::cout << "a == b: ";
    if (a == b) {
        std::cout << "true";
    }
    else {

        std::cout << "false";
    }
    std::cout << " expected false" << std::endl;
    std::cout << "a != b: ";
    if (a != b) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    std::cout << " expected true" << std::endl << std::endl;

    std::cout << "a > c: ";
    if (a > c) {
        std::cout << "true";
    }
    else {

        std::cout << "false";
    }
    std::cout << " expected false" << std::endl;
    std::cout << "a < c: ";
    if (a < c) {
        std::cout << "true";
    }
    else {

        std::cout << "false";
    }
    std::cout << " expected false" << std::endl;
    std::cout << "a <= c: ";
    if (a <= c)
    {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    std::cout << " expected true" << std::endl;
    std::cout << "a >= c: ";
    if (a >= c) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    std::cout << " expected true" << std::endl;
    std::cout << "a != c: ";
    if (a != c) {
        std::cout << "true";
    }
    else {

        std::cout << "false";
    }
    std::cout << " expected false" << std::endl;
    std::cout << "a == c: ";
    if (a == c) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    std::cout << " expected true" << std::endl << std::endl;

}

void    testOperations() {
    const Fixed a(0.1f);
    const Fixed b(0.2f);
    const Fixed c(0.3f);
    const Fixed d(0.01f);
    Fixed res;

    std::cout << "\na is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl << std::endl;

    std::cout << std::endl;
    res = a + b;
    std::cout << "a + b = " << res << " and ";
    if (res == c) {
        std::cout << "it's equal too c (good)\n";
    }
    else {
        std::cout << "it's different than c (bad)\n";
    }
    std::cout << std::endl;

    std::cout << std::endl;
    res = c - b;
    std::cout << "c - b = " << res << " and ";
    if (res == a) {
        std::cout << "it's equal too a (good)\n";
    }
    else {
        std::cout << "it's different than a (bad)\n";
    }
    std::cout << std::endl;

    std::cout << std::endl;
    res = a * a;
    std::cout << "a * a = " << res << " and ";
    if (res == d) {
        std::cout << "it's equal too d (good)\n";
    }
    else {
        std::cout << "it's different than d (bad)\n";
    }
    std::cout << std::endl;

    std::cout << std::endl;
    res = a / d;
    std::cout << "a / d = " << res << " and that's bad but normal\n";
    std::cout << std::endl;
}

void testIncrements(void) {

    Fixed a(0.00390625f);

    std::cout << "\na is " << a << std::endl << std::endl;
    std::cout << "a++ makes a " << a++ << " expected 0.0078125" << std::endl;
    std::cout << "a-- makes a " << a-- << " expected 0.00390625" << std::endl;
    std::cout << "++a makes a " << ++a << " expected 0.0078125" << std::endl;
    std::cout << "--a makes a " << --a << " expected 0.00390625\n" << std::endl;

}

void testMinMax(void) {
    
    Fixed a(0.00390625f);
    Fixed b(2 * 0.00390625f);
    
    std::cout << "\na is " << a << std::endl;
    std::cout << "b is " << b << std::endl << std::endl;

    std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl << std::endl;
    
}

int main( void ) {
    
    

}
