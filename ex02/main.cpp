/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:33:47 by turescu           #+#    #+#             */
/*   Updated: 2025/04/11 18:33:08 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void testMutantStack()
{
    std::cout << PINK << "\n=====THE MUTANT STACK GIVEN TEST=====" << RESET << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << GREEN << "Top element: " << mstack.top() << RESET << std::endl;
    mstack.pop();
    std::cout << GREEN << "Size after pop: " << mstack.size() << RESET << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << CYAN << "Regular iterator test: " << RESET << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << CYAN << "Reverse iterator test: " << RESET << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }
    std::cout << CYAN << "Constant iterator test: " << RESET << std::endl;
    const MutantStack<int> const_mstack(mstack);
    MutantStack<int>::const_iterator cit = const_mstack.begin();
    MutantStack<int>::const_iterator cite = const_mstack.end();
    while (cit != cite)
    {
        std::cout << *cit << std::endl;
        ++cit;
    }
    std::cout << CYAN << "Constant reverse iterator test: " << RESET << std::endl;
    MutantStack<int>::const_reverse_iterator crit = const_mstack.rbegin();
    MutantStack<int>::const_reverse_iterator crite = const_mstack.rend();
    while (crit != crite)
    {
        std::cout << *crit << std::endl;
        ++crit;
    }
    std::stack<int> s(mstack);
    std::cout << GREEN << "Mutant stack size: " << mstack.size() << RESET << std::endl;
    std::cout << GREEN << "Standard stack size after copy: " << s.size() << RESET << std::endl;
}

void testList()
{
    std::cout << PINK << "\n=====LIST TEST=====" << RESET << std::endl;
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << GREEN << "Back element: " << lst.back() << RESET << std::endl;
    lst.pop_back();
    std::cout << GREEN << "Size after pop: " << lst.size() << RESET << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    std::cout << CYAN << "Regular iterator test: " << RESET << std::endl;
    std::list<int>::iterator it = lst.begin();
    std::list<int>::iterator ite = lst.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << CYAN << "Reverse iterator test: " << RESET << std::endl;
    std::list<int>::reverse_iterator rit = lst.rbegin();
    std::list<int>::reverse_iterator rite = lst.rend();
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }
    std::cout << CYAN << "Constant iterator test: " << RESET << std::endl;
    const std::list<int> const_lst(lst);
    std::list<int>::const_iterator cit = const_lst.begin();
    std::list<int>::const_iterator cite = const_lst.end();
    while (cit != cite)
    {
        std::cout << *cit << std::endl;
        ++cit;
    }
    std::cout << CYAN << "Constant reverse iterator test: " << RESET << std::endl;
    std::list<int>::const_reverse_iterator crit = const_lst.rbegin();
    std::list<int>::const_reverse_iterator crite = const_lst.rend();
    while (crit != crite)
    {
        std::cout << *crit << std::endl;
        ++crit;
    }
    std::list<int> lstCopy(lst);
    std::cout << GREEN << "List size: " << lst.size() << RESET << std::endl;
    std::cout << GREEN << "Standard list size after copy: " << lstCopy.size() << RESET << std::endl;
}

void testVector()
{
    std::cout << PINK << "\n=====VECTOR TEST=====" << RESET << std::endl;
    std::vector<int> vctr;
    vctr.push_back(5);
    vctr.push_back(17);
    std::cout << GREEN << "Back element: " << vctr.back() << RESET << std::endl;
    vctr.pop_back();
    std::cout << GREEN << "Size after pop: " << vctr.size() << RESET << std::endl;
    vctr.push_back(3);
    vctr.push_back(5);
    vctr.push_back(737);
    vctr.push_back(0);
    std::cout << CYAN << "Regular iterator test: " << RESET << std::endl;
    std::vector<int>::iterator it = vctr.begin();
    std::vector<int>::iterator ite = vctr.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << CYAN << "Reverse iterator test: " << RESET << std::endl;
    std::vector<int>::reverse_iterator rit = vctr.rbegin();
    std::vector<int>::reverse_iterator rite = vctr.rend();
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }
    std::cout << CYAN << "Constant iterator test: " << RESET << std::endl;
    const std::vector<int> const_vctr(vctr);
    std::vector<int>::const_iterator cit = const_vctr.begin();
    std::vector<int>::const_iterator cite = const_vctr.end();
    while (cit != cite)
    {
        std::cout << *cit << std::endl;
        ++cit;
    }
    std::cout << CYAN << "Constant reverse iterator test: " << RESET << std::endl;
    std::vector<int>::const_reverse_iterator crit = const_vctr.rbegin();
    std::vector<int>::const_reverse_iterator crite = const_vctr.rend();
    while (crit != crite)
    {
        std::cout << *crit << std::endl;
        ++crit;
    }
    std::vector<int> vCopy(vctr);
    std::cout << GREEN << "Vector size: " << vctr.size() << RESET << std::endl;
    std::cout << GREEN << "Standard vector size after copy: " << vCopy.size() << RESET << std::endl;
}

int main()
{
    testMutantStack();
    testList();
    testVector();
    return 0;
}