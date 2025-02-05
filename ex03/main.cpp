/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:11:01 by gozon             #+#    #+#             */
/*   Updated: 2025/02/05 14:02:42 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tajavon <tajavon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 19:44:09 by tajavon           #+#    #+#             */
/*   Updated: 2024/01/02 12:37:21 by tajavon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);


int is_in_triangle(Point& a, Point& b, Point&c, Point& point)
{
	bool is_in_abc = bsp(a, b, c, point);
	if (is_in_abc)
		std::cout << "Le point appartient bien au triangle ABC !" << std::endl;
	else
		std::cout << "Le point n'appartient pas au triangle ABC !" << std::endl;

	return (0);
}

int main(void) {

	{
		float a1 = 0;
		float a2 = 0;
		float b1 = 1;
		float b2 = 0;
		float c1 = 0.5f;
		float c2 = 1;
		float p1 = 0.5f;
		float p2 = 0.5f;
		std::string is = "";
		std::string pointName = "P1";
		Point a(a1, a2);
		Point b(b1, b2);
		Point c(c1, c2);
		Point point(p1, p2);
		
		std::cout << "Triangle A(" << a1 << ", " << a2 << "), ";
		std::cout << "B(" << b1 << ", " << b2 << "), ";
		std::cout << "C(" << c1 << ", " << c2 << ")." << std::endl;
		std::cout << "Point " << pointName << "("<< p1 << ", " << p2 << ") should " << is << "be in triangle." << std::endl;
		std::cout << "bsp result :\n";
		is_in_triangle(a, b, c, point);
		std::cout << std::endl;
	}
	{
		float a1 = 0;
		float a2 = 0;
		float b1 = 1;
		float b2 = 0;
		float c1 = 0.5f;
		float c2 = 1;
		float p1 = 0.2f;
		float p2 = 0.2f;
		std::string pointName = "P2";
		std::string is = "";
		Point a(a1, a2);
		Point b(b1, b2);
		Point c(c1, c2);
		Point point(p1, p2);
		
		std::cout << "Triangle A(" << a1 << ", " << a2 << "), ";
		std::cout << "B(" << b1 << ", " << b2 << "), ";
		std::cout << "C(" << c1 << ", " << c2 << ")." << std::endl;
		std::cout << "Point " << pointName << "("<< p1 << ", " << p2 << ") should " << is << "be in triangle." << std::endl;		std::cout << "bsp result :\n";
		is_in_triangle(a, b, c, point);
		std::cout << std::endl;
	}
	{
		float a1 = 0;
		float a2 = 0;
		float b1 = 1;
		float b2 = 0;
		float c1 = 0.5f;
		float c2 = 1;
		float p1 = 0;
		float p2 = 0;
		std::string pointName = "A";
		std::string is = "";
		Point a(a1, a2);
		Point b(b1, b2);
		Point c(c1, c2);
		Point point(p1, p2);
		
		std::cout << "Triangle A(" << a1 << ", " << a2 << "), ";
		std::cout << "B(" << b1 << ", " << b2 << "), ";
		std::cout << "C(" << c1 << ", " << c2 << ")." << std::endl;
		std::cout << "Point " << pointName << "("<< p1 << ", " << p2 << ") should " << is << "be in triangle." << std::endl;		std::cout << "bsp result :\n";
		is_in_triangle(a, b, c, point);
		std::cout << std::endl;
	}
	{
		float a1 = -1;
		float a2 = -1;
		float b1 = 1;
		float b2 = -1;
		float c1 = 0;
		float c2 = 1;
		float p1 = 0;
		float p2 = 0;
		std::string pointName = "P3";
		std::string is = "";
		Point a(a1, a2);
		Point b(b1, b2);
		Point c(c1, c2);
		Point point(p1, p2);
		
		std::cout << "Triangle A(" << a1 << ", " << a2 << "), ";
		std::cout << "B(" << b1 << ", " << b2 << "), ";
		std::cout << "C(" << c1 << ", " << c2 << ")." << std::endl;
		std::cout << "Point " << pointName << "("<< p1 << ", " << p2 << ") should " << is << "be in triangle." << std::endl;		std::cout << "bsp result :\n";
		is_in_triangle(a, b, c, point);
		std::cout << std::endl;
	}
	{
		float a1 = 2;
		float a2 = 3;
		float b1 = 6;
		float b2 = 1;
		float c1 = 4;
		float c2 = 5;
		float p1 = 5;
		float p2 = 4;
		std::string pointName = "P4";
		std::string is = "not ";
		Point a(a1, a2);
		Point b(b1, b2);
		Point c(c1, c2);
		Point point(p1, p2);
		
		std::cout << "Triangle A(" << a1 << ", " << a2 << "), ";
		std::cout << "B(" << b1 << ", " << b2 << "), ";
		std::cout << "C(" << c1 << ", " << c2 << ")." << std::endl;
		std::cout << "Point " << pointName << "("<< p1 << ", " << p2 << ") should " << is << "be in triangle." << std::endl;		std::cout << "bsp result :\n";
		is_in_triangle(a, b, c, point);
		std::cout << std::endl;
	}
	{
		float a1 = 0;
		float a2 = 0;
		float b1 = 2;
		float b2 = 0;
		float c1 = 1;
		float c2 = 3;
		float p1 = 1;
		float p2 = 2;
		std::string pointName = "P5";
		std::string is = "";
		Point a(a1, a2);
		Point b(b1, b2);
		Point c(c1, c2);
		Point point(p1, p2);
		
		std::cout << "Triangle A(" << a1 << ", " << a2 << "), ";
		std::cout << "B(" << b1 << ", " << b2 << "), ";
		std::cout << "C(" << c1 << ", " << c2 << ")." << std::endl;
		std::cout << "Point " << pointName << "("<< p1 << ", " << p2 << ") should " << is << "be in triangle." << std::endl;		std::cout << "bsp result :\n";
		is_in_triangle(a, b, c, point);
		std::cout << std::endl;
	}
	{
		float a1 = 0;
		float a2 = 0;
		float b1 = 1;
		float b2 = 0;
		float c1 = 0.5f;
		float c2 = 1;
		float p1 = 0.8;
		float p2 = 0.8;
		std::string pointName = "P6";
		std::string is = "not ";
		Point a(a1, a2);
		Point b(b1, b2);
		Point c(c1, c2);
		Point point(p1, p2);
		
		std::cout << "Triangle A(" << a1 << ", " << a2 << "), ";
		std::cout << "B(" << b1 << ", " << b2 << "), ";
		std::cout << "C(" << c1 << ", " << c2 << ")." << std::endl;
		std::cout << "Point " << pointName << "("<< p1 << ", " << p2 << ") should " << is << "be in triangle." << std::endl;		std::cout << "bsp result :\n";
		is_in_triangle(a, b, c, point);
		std::cout << std::endl;
	}
	{
		float a1 = 0;
		float a2 = 0;
		float b1 = 1;
		float b2 = 0;
		float c1 = 0.5f;
		float c2 = 1;
		float p1 = 0.5;
		float p2 = 0;
		std::string pointName = "P7";
		std::string is = "";
		Point a(a1, a2);
		Point b(b1, b2);
		Point c(c1, c2);
		Point point(p1, p2);
		
		std::cout << "Triangle A(" << a1 << ", " << a2 << "), ";
		std::cout << "B(" << b1 << ", " << b2 << "), ";
		std::cout << "C(" << c1 << ", " << c2 << ")." << std::endl;
		std::cout << "Point " << pointName << "("<< p1 << ", " << p2 << ") should " << is << "be in triangle." << std::endl;		std::cout << "bsp result :\n";
		is_in_triangle(a, b, c, point);
		std::cout << std::endl;
	}
	return (0);
}
