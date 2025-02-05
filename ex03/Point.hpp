/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:36:16 by gozon             #+#    #+#             */
/*   Updated: 2025/02/05 10:00:34 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

class Point {

    private:
    
        Fixed const x;
        Fixed const y;

        static const Fixed& scalar(const Point& origin, const Point& a, 
                                const Point& b);
    
    public:
        
            Point();
            Point(float const x, float const y);
            Point(const Point& point);
            Point& operator=(Point& point);
            ~Point();

            bool    isOnSameSide(const Point& point, const Point& lineOrigin, 
                        const Point& lineDir);

};
