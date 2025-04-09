/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:39:49 by turescu           #+#    #+#             */
/*   Updated: 2025/04/09 20:04:03 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <iomanip>
# include <cmath>
# include <sstream>
# include <string>
# include <limits.h>
# include <limits>
# include <algorithm>
# include <stdexcept>
# include <vector>
# include <list>
# include <deque>

# define RED "\033[31m"
# define BLUE "\033[34m"
# define YELLOW "\033[33m"
# define PINK "\033[38;5;205m"
# define TEAL "\033[38;5;30m"
# define LAVENDER "\033[38;5;183m"
# define CYAN "\033[38;5;51m"
# define LIGHT_YELLOW "\033[38;5;229m"
# define GREEN "\033[32m"
# define RESET "\033[0m"

class Span
{
private:
    std::vector<int> numbers;
    unsigned int N;
public:
    Span();
    Span(unsigned int N);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();
    void addNumber(int x);
    unsigned int shortestSpan();
    unsigned int longestSpan();
};

#endif