/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 08:37:27 by gozon             #+#    #+#             */
/*   Updated: 2025/02/02 10:39:58 by gozon            ###   ########.fr       */
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

        bool operator>(const Fixed& fixed) const;
        bool operator<(const Fixed& fixed) const;
        bool operator>=(const Fixed& fixed) const;
        bool operator<=(const Fixed& fixed) const;
        bool operator==(const Fixed& fixed) const;
        bool operator!=(const Fixed& fixed) const;

        Fixed operator+(const Fixed& fixed) const;
        Fixed operator-(const Fixed& fixed) const;
        Fixed operator*(const Fixed& fixed) const;
        Fixed operator/(const Fixed& fixed) const;

        Fixed& operator++(void);
        Fixed& operator++(int);
        Fixed& operator--(void);
        Fixed& operator--(int);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);

    private:

        int raw;
        static int const fract_size;

};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
