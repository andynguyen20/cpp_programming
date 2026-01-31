/*
 * exercise1_23.cxx
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
	Sales_item item1, item2; 
	int count = 0;
	if (std::cin >> item1) {
		count = 1;
		while (std::cin >> item2) {
			if(item1.isbn() == item2.isbn()) {
				count++;
			} else {
				std::cout << "ISBN " << item1.isbn() << " has " << count << " transactions";
				item1 = item2;
				count = 1;
			}
		}
		std::cout << "ISBN " << item1.isbn() << " has " << count << " transactions";
	}
	return 0;
}

