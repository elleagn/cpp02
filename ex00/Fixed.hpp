/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 08:37:27 by gozon             #+#    #+#             */
/*   Updated: 2025/02/14 08:20:44 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

    public:

        Fixed(void);
        Fixed(const Fixed& fixed);
        ~Fixed(void);

        Fixed& operator=(const Fixed& fixed);

        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:

        int raw;
        static int const fract_size = 8;

};

#endif
