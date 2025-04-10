/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:40:27 by turescu           #+#    #+#             */
/*   Updated: 2025/04/10 15:16:25 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::cout << PINK << "=====Subject Test=====" << RESET << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    
    std::cout << PINK << "\n=====Large Test=====" << RESET << std::endl;
    try {
        const unsigned int N = 10000;
        Span largeSpan(N);
        std::srand(time(0));//seed the random number generator
        std::cout << LIGHT_YELLOW << "Adding " << N << " random numbers" << RESET << std::endl;
        for (unsigned int i = 0; i < N; i++)
            largeSpan.addNumber(std::rand() % 10000);
        std::cout << GREEN << "Shortest span: " << largeSpan.shortestSpan() << RESET<< std::endl;
        std::cout << GREEN << "Longest span: " << largeSpan.longestSpan() << RESET << std::endl;
    } catch (std::exception& e) {
        std::cout << RED << "Exception caught: " << e.what() << RESET << std::endl; 
    }
    
    std::cout << PINK << "\n=====Exception Tests=====" << RESET << std::endl;
    try {
        std::cout << LAVENDER << "Testing adding to a full Span" << RESET << std::endl;
        Span smallSpan(2);
        smallSpan.addNumber(1);
        smallSpan.addNumber(2);
        smallSpan.addNumber(3);
    } catch (std::exception& e) {
        std::cout << RED << "Exception caught: " << e.what() << RESET << std::endl; 
    }
    try {
        std::cout << LAVENDER << "Testing span calculation with not enaugh elements" << RESET << std::endl;
        Span emptySpan(5);
        emptySpan.shortestSpan();
    } catch (std::exception& e) {
        std::cout << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }
    return 0;
}
