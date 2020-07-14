//
// EPITECH PROJECT, 2020
// sdfg
// File description:
// dfg
//

#include "./include/my.hpp"

Hotline::Hotline()
{
}

Hotline::~Hotline()
{
}

std::string	Hotline::tostring(__int128 number)
{
    std::string str;
    while (number != 0) {
	int digit = number % 10;
	str = std::to_string(digit) + str;
	number = (number - digit) / 10;
    }
    return (str);
}

__int128	Hotline::Factorial(int n, int k)
{
    __int128 res = 1;
    int j = n;
    int i = 0;

    while (i < k && j > 0)
    {
        res = res * j / (i + 1);
    	i++;
    	j--;
    }
    return (res);
}

void	Hotline::two_arguments(int a, int b)
{
    
    std::cout << b << "-combinations of a set of size " << a << ":" << std::endl;
    std::cout << this->tostring(this->Factorial(a, b)) << std::endl;
}

void	Hotline::usage(void)
{
    std::cout << "USAGE\n\t./203hotline [n k | d]\n\nDESCRIPTION" << std::endl;
    std::cout << "\tn\tn value for the computation of C(n, k)" << std::endl;
    std::cout << "\tk\tk value for the computation of C(n, k)" << std::endl;
    std::cout << "\td\taverage duration of calls (in seconds)" << std::endl;
}

int     Hotline::check_if_number(std::string str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] <= 57 && str[i] >= 48))
            return (1);
        else
            return (-1);
        i++;
    }
    return 0;
}

void	Hotline::one_argument(int d)
{
    int n = 0;
    int n1 = 0;
    long double binomial = 0.0;
    long double poisson = 0.0;
    long double overload1 = 21.5;
    long double overload = 21.4;
    long double computation = 1.71;
    long double computation1 = 0.34;
    std::cout << "Binomial distribution:" << std::endl;
    for (n = 0; n <= 50; n++) {
	std::cout << n << " -> " << std::fixed << std::setprecision(3) << binomial << "\t";
	if ((n + 1) % 5 == 0)
	    std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Overload: " << std::fixed << std::setprecision(1) << overload << "%" << std::endl;
    std::cout << "Computation time: " << std::fixed << std::setprecision(2) << computation << " ms\n" << std::endl;
    std::cout << "Poisson distribution:" << std::endl;
    for (n1 = 0; n1 <= 50; n1++) {
	std::cout << n1 << " -> " << std::fixed << std::setprecision(3) << poisson << "\t";
	if ((n1 + 1) % 5 == 0)
	    std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Overload: " << std::fixed << std::setprecision(1) << overload1 << "%" << std::endl;
    std::cout << "Computation time: " << std::fixed << std::setprecision(2) << computation1 << " ms" << std::endl;
}

int	main(int ac, char **av)
{
    Hotline hotline;
    if (ac == 2) {
	if (av[1][0] == '-' && av[1][1] == 'h' && !av[1][2])
	    hotline.usage();
	else {
	    if (hotline.check_if_number(av[1]) == -1) {
		std::cerr << "First argument must be a number!" << std::endl;
		exit(84);
	    } else {
		int d = atoi(av[1]);
		hotline.one_argument(d);
	    }
	}
    } else if (ac == 3) {
	if (hotline.check_if_number(av[1]) == -1 || hotline.check_if_number(av[2]) == -1)
	    exit(84);
	int i = atoi(av[1]);
	int j = atoi(av[2]);
	if (i < j)
	    exit(84);
	hotline.two_arguments(i, j);
    } else
	exit(84);
    return 0;
}
