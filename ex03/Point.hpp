/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:36:16 by gozon             #+#    #+#             */
/*   Updated: 2025/02/07 10:40:17 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point {

    private:

        Fixed const x;
        Fixed const y;

        static const Fixed det(const Point& origin, const Point& a,
                                const Point& b);

    public:

            Point();
            Point(float const x, float const y);
            Point(const Point& point);
            Point& operator=(Point&);
            ~Point();

            bool    isOnSameSide(const Point& point, const Point& lineOrigin,
                        const Point& lineDir) const;

};

#endif
