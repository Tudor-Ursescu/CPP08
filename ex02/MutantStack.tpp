/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:19:21 by tursescu          #+#    #+#             */
/*   Updated: 2025/04/11 17:16:11 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>() {
    std::cout << YELLOW << "Default constructor called" << RESET << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& other) : std::stack<T, Container>(other) {
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack& other) {
    if (this != &other) {
        std::stack<T, Container>::operator=(other);
    }
    std::cout << YELLOW << "Copy assignment operator called" << RESET << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack() {
    std::cout << RED << "Destructor called" << RESET << std::endl; 
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() {
    return this->c.begin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() {
    return this->c.end();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::begin() const {
    return this->c.begin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::end() const {
    return this->c.end();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rbegin() {
    return this->c.rbegin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rend() {
    return this->c.rend();

}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::rbegin() const {
    return this->c.rbegin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::rend() const {
    return this->c.rend();
}
