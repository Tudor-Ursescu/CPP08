/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:50:52 by turescu           #+#    #+#             */
/*   Updated: 2025/04/09 18:44:29 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

template <typename T>
typename T::iterator easyfind(T& container, int n) {
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw std::invalid_argument("Element not found!");
    return it;
}

#endif