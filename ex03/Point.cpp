/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:51:21 by gozon             #+#    #+#             */
/*   Updated: 2025/02/05 11:24:22 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(Fixed()), y(Fixed()) {
    
    std::cout << "Point default constructor called\n";
    
} 

Point::Point(float const x, float const y) : x(Fixed(x)), y(Fixed(y)) {

    std::cout << "Float constructor called" << std::endl;
    
}

Point::Point(const Point& point) : x(Fixed(point.x)), y(Fixed(point.y)) {
    
    std::cout << "Copy constructor called" << std::endl;
    
}

Point&  Point::operator=(Point& point) {

    return (*this);
    
}

Point::~Point() {
    
    std::cout << "Point destructor called\n";

}

const Fixed& Point::scalar(const Point& origin, const Point& a, const Point& b) {
    
    Fixed result;

    result = (a.x - origin.x) * (b.x - origin.x) + (a.y - origin.y) * (b.y - origin.y);
    return (result);

}

bool    Point::isOnSameSide(const Point& point, const Point& lineOrigin, 
            const Point& lineDir) const {
                
    Fixed zero;
    Fixed scalar1;
    Fixed scalar2;

    scalar1 = Point::scalar(lineOrigin, lineDir, point);
    scalar2 = Point::scalar(lineOrigin, lineDir, *this);
    
    if (scalar1 * scalar2 < zero) {
        return (false);
    }
    return (true);
                
}