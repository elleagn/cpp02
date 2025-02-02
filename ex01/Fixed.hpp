/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 08:37:27 by gozon             #+#    #+#             */
/*   Updated: 2025/02/02 09:23:41 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <climits>
# include <cmath>

class Fixed {

    public:

        Fixed(void);
        Fixed(const Fixed& fixed);
        Fixed(int const number);
        Fixed(float const number);
        ~Fixed(void);

        Fixed& operator=(const Fixed& fixed);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

    private:

        int raw;
        static int const fract_size;

};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
