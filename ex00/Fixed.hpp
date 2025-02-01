/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 08:37:27 by gozon             #+#    #+#             */
/*   Updated: 2025/02/01 09:15:39 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

    public:

        Fixed(void);
        Fixed(const Fixed& fixed);
        ~Fixed(void);

        Fixed operator=(const Fixed& fixed);

        int getRawBits(void);
        int setRawBits(int const raw);

    private:

        int value;
        static int const bit_point_pos;

};

#endif
