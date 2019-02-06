/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 23:23:05 by mchristo          #+#    #+#             */
/*   Updated: 2019/02/01 21:25:50 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::list<int>	list;

	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);

	try {
		std::cout << easyfind(list, 4) << std::endl;
	}	catch (std::logic_error e) {
			std::cout << e.what() << std::endl;
		}

	try {
		std::cout << easyfind(list, 6) << std::endl;
	}	catch (std::logic_error e) {
		std::cout << e.what() << std::endl;
		}

	std::vector<int>	list2;

	list2.push_back(6);
	list2.push_back(2);
	list2.push_back(8);
	list2.push_back(9);
	list2.push_back(10);

	try {
		std::cout << easyfind(list2, 2) << std::endl;
	}	catch (std::logic_error e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << easyfind(list2, 7) << std::endl;
	}	catch (std::logic_error e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}