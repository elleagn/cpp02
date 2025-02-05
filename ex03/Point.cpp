/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:36:16 by gozon             #+#    #+#             */
/*   Updated: 2025/02/05 08:48:40 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point {

    private:
    
        Fixed const x;
        Fixed const y;
    
    public:
        
            Point();
            Point(float const x, float const y);
            Point(const Point& point);
            Point& operator=(Point& point);
            ~Point();

        static const Fixed& scalar(Point& common, Point& a, Point& b); 
}
