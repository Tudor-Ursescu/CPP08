/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:40:09 by turescu           #+#    #+#             */
/*   Updated: 2025/04/10 14:18:04 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0) {
    std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int N) : N(N) {
    numbers.reserve(N);
    std::cout << YELLOW << "Parameter constuctor called" << RESET << std::endl;
}

Span::Span(const Span &other) : N(other.N) {
    this->numbers = other.numbers;
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
}

Span & Span::operator=(const Span &other) {
    if (this != &other) {
       this->N = other.N;
       this->numbers = other.numbers;
    }
    std::cout << YELLOW << "Copy assignmnet operator called" << RESET << std::endl;
    return *this;
}

Span::~Span() {
    std::cout << "Destructor called" << std::endl;
}

void Span::addNumber(int x) {
    if (numbers.size() >= N)
        throw std::length_error("Span is full!");
    numbers.push_back(x);
}

unsigned int Span::shortestSpan() {
    if (numbers.size() <= 1)
        throw std::length_error("Not enaugh numbers to calculate span");
    std::vector<int> sorted = numbers;
    std::sort(sorted.begin(), sorted.end());
    unsigned int minSpan = std::numeric_limits<unsigned int>::max();
    for (unsigned int i = 1; i < sorted.size(); i++) {
        unsigned int diff = sorted[i] - sorted[i - 1];
        if (diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}

unsigned int Span::longestSpan() {
    if (numbers.size() <= 1)
        throw std::length_error("Not enaugh numbers to calculate span");
    int min = *std::min_element(numbers.begin(), numbers.end());
    int max = *std::max_element(numbers.begin(), numbers.end());
    return static_cast<unsigned int>(max - min);    
}