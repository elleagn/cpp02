/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:51:21 by gozon             #+#    #+#             */
/*   Updated: 2025/02/05 18:30:19 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(Fixed()), y(Fixed()) {

}

Point::Point(float const x, float const y) : x(Fixed(x)), y(Fixed(y)) {

}

Point::Point(const Point& point) : x(Fixed(point.x)), y(Fixed(point.y)) {

}

Point&  Point::operator=(Point&) {

    return (*this);

}

Point::~Point() {

}

const Fixed Point::det(const Point& origin, const Point& a, const Point& b) {

    Fixed result;

    result = (a.x - origin.x) * (b.y - origin.y) - (a.y - origin.y) * (b.x - origin.x);
    return (result);

}

bool    Point::isOnSameSide(const Point& point, const Point& lineOrigin,
            const Point& lineDir) const {

    Fixed zero;
    Fixed det1;
    Fixed det2;

    det1 = Point::det(lineOrigin, lineDir, point);
    det2 = Point::det(lineOrigin, lineDir, *this);

    if (det1 * det2 < zero) {
        return (false);
    }
    return (true);

}
