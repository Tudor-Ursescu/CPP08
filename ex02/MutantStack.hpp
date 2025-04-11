/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:34:09 by turescu           #+#    #+#             */
/*   Updated: 2025/04/10 15:41:31 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

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
# include <stack>

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


template <typename T>
class MutantStack
{
private:
    std::stack<int> numbers;
public:
    MutantStack();
    ~MutantStack();
};

#endif