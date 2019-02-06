/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 20:50:01 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/31 22:41:11 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	Array<int> myNums = Array<int>(9);

	myNums[0] = 1, myNums[1] = 2, myNums[2] = 3, myNums[3] = 4, myNums[4] = 5,
	myNums[5] = 6, myNums[6] = 7, myNums[7] = 8, myNums[8] = 9;

	std::cout << std::endl 
              << "\033[1;32m<<<<<<        Original Array       >>>>>>\033[0m" << std::endl
              << "        "
              << myNums[0] << ", "
			  << myNums[1] << ", "
			  << myNums[2] << ", "
			  << myNums[3] << ", "
			  << myNums[4] << ", "
			  << myNums[5] << ", "
			  << myNums[6] << ", "
			  << myNums[7] << ", "
			  << myNums[8] << std::endl
              << std::endl;
              
    std::cout << "\033[1;32m<<<      Testing size() function      >>>\033[0m" << std::endl 
              << "                Size: " 
              << myNums.size() << std::endl
              << std::endl;

	Array<int> myNumsCpy = Array<int>(myNums);

    for(int f = 0; f<9; f++)
	    myNumsCpy[f] = 42;

	std::cout << "\033[1;32m<<< Copying the array to do some mods >>>\033[0m" << std::endl
              << "   " 
              << myNumsCpy[0] << ", "
			  << myNumsCpy[1] << ", "
			  << myNumsCpy[2] << ", "
			  << myNumsCpy[3] << ", "
			  << myNumsCpy[4] << ", "
			  << myNumsCpy[5] << ", "
			  << myNumsCpy[6] << ", "
			  << myNumsCpy[7] << ", "
			  << myNumsCpy[8] << std::endl
              << std::endl;

	myNumsCpy = myNums;

	std::cout << "\033[1;32m<<<   Original array doesn't change   >>>\033[0m" << std::endl
			  << "        "
              << myNumsCpy[0] << ", "
			  << myNumsCpy[1] << ", "
			  << myNumsCpy[2] << ", "
			  << myNumsCpy[3] << ", "
			  << myNumsCpy[4] << ", "
			  << myNumsCpy[5] << ", "
			  << myNumsCpy[6] << ", "
			  << myNumsCpy[7] << ", "
			  << myNumsCpy[8] << std::endl
              << std::endl;

    try {
		myNums[9] = 42;
	}   catch (std::range_error e){
            std::cout << "\033[1;32m<<<   Attempting to access index[9]   >>>\033[0m" << std::endl
                  << "         "
		          << e.what() << std::endl
                  << std::endl;
	}

	Array<int> empty = Array<int>();
	std::cout << "\033[1;32m<<<  Create array with no paramaters  >>>\033[0m" << std::endl
              << "                Size: "
              << empty.size() << std::endl;

	return 0;
}