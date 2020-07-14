/*
** EPITECH PROJECT, 2020
** asdfgn
** File description:
** dfgh
*/

#ifndef MY_HPP_
#define MY_HPP_

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cmath>
#include <limits>

class	Hotline
{
public:
    Hotline();
    ~Hotline();
    void	usage(void);
    void	two_arguments(int a, int b);
    void	one_argument(int b);
    int check_if_number(std::string str);
    __int128 Factorial(int n, int k);
    std::string	tostring(__int128 number);
};

#endif /* MY_HPP_ */
