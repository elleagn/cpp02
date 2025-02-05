/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:14:49 by gozon             #+#    #+#             */
/*   Updated: 2025/02/05 11:26:00 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point) {
    
    if (!point.isOnSameSide(c, a, b)) {
        return (false);
    }
    else if (!point.isOnSameSide(b, a, c)) {
        return (false);
    }
    else if (!point.isOnSameSide(a, b, c)) {
        return (false);
    }
    return (true);

}