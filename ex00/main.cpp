/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:50:49 by turescu           #+#    #+#             */
/*   Updated: 2025/04/09 19:37:14 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    std::vector<int> intVector;
    std::list<int> intList;
    std::deque<int> intDeque;
    try {
        std::cout << PINK << "=====VECTORS=====" << RESET << std::endl; 
        for (int i = 0; i < 5; i++)
            intVector.push_back(i);
        std::cout << YELLOW << "Vector contains: ";
        for (std::vector<int>::iterator it = intVector.begin(); it != intVector.end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << RESET << std::endl;
        
        std::vector<int>::iterator found = easyfind(intVector, 3);
        std::cout << GREEN << "Found value " << *found << " in vector!" << RESET << std::endl;
    
        std::cout << PINK << "=====LISTS=====" << RESET << std::endl;
        for (int i = 0; i < 5; i++)
            intList.push_back(i);
        std::cout << YELLOW << "List contains: ";
        for (std::list<int>::iterator it = intList.begin(); it != intList.end(); it++)
            std::cout << *it << " ";
        std::cout << RESET << std::endl;
        std::list<int>::iterator listFound = easyfind(intList, 2);
        std::cout << GREEN << "Found value " << *listFound << " in list!" << RESET << std::endl;
        
        std::cout << PINK << "=====DEQUE=====" << RESET << std::endl;
        for (int i = 0; i < 5; i++)
            intDeque.push_back(i);
        std::cout << YELLOW << "Deque contains: ";
        for (std::deque<int>::iterator it = intDeque.begin(); it != intDeque.end(); it++)
            std::cout << *it << " ";
        std::cout << RESET << std::endl;
        std::deque<int>::iterator dequeFound = easyfind(intDeque, 4);
        std::cout << GREEN << "Found value " << *dequeFound << " in list!" << RESET << std::endl;
        
    } catch (std::exception& e) {
        std::cout << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }
        std::cout << PINK << "=====TRYING TO FIND A NON-EXISTENT ELEMENT=====" << RESET << std::endl;
    try{
        std::cout << YELLOW << "For the vector, try and find 42: " << RESET << std::endl;
        easyfind(intVector, 42);    
    } catch (std::exception& e){
        std::cout << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }
    try {
        std::cout << YELLOW << "For the list, try and find 42: " << RESET << std::endl;
        easyfind(intList, 42);
    } catch (std::exception& e) {
        std::cout << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }
    try{
        std::cout << YELLOW << "For the deque, try and find 42: " << RESET << std::endl;
        easyfind(intDeque, 42);
    } catch (std::exception& e) {
        std::cout << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }
    return 0;
}