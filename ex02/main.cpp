/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:11:01 by gozon             #+#    #+#             */
/*   Updated: 2025/02/03 11:03:05 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iomanip>

bool testComparisons(void) {

    Fixed a(0.00390625f);
    Fixed b(0.0078125f);
    Fixed c(a);

    std::cout << std::setfill('-') << std::setw(10) << "" << " COMPARISONS ";
    std::cout << std::setw(10) << "" << std::endl << std::endl;

    std::cout << "a is " << a << std::endl;
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

int main( void ) {

    if (!testComparisons()) {
        std::cout << "Error with comparisons.";
        return (1);
    }
}
