/*
 * exercise1_25.cxx
 * 
 * Copyright 2026 tequi <tequi@ANDY-COMPUTER>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include "Sales_item.h"

int main(int argc, char **argv)
{
	Sales_item total; // variable to hold data for the next transaction
	// read the first transaction and ensure that there are data to process
	if (std::cin >> total) {
		Sales_item trans; // variable to holding the running sum
		// read and process the remaining transactions
		while (std::cin >> trans) {
			// if we're still processing the same book
			if (total.isbn() == trans.isbn()) {
				total += trans; // update the running total;
			} else {
				// print results for the previous book
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl; // print the last transactions 
	} else {
		// no input! warn the user
		std::cerr << "No data?!" << std::endl;
		return -1; // indicate failure
	}
	return 0;
}

