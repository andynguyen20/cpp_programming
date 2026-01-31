/*
 * demo_if.cxx
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

int main(int argc, char **argv)
{
	// currVal is the number we're counting; we'll read new  values into val
	int currVal = 0, val = 0;
	// read first number and ensure that we have data to process
	if (std::cin >> currVal) {
		int cnt = 1; // store the count for the current value we're processing
		while (std::cin >> val) { // read the remaining numbers
			if (val == currVal) {// if the values are the same
				++cnt;
			} else { // otherwise, print the count for the previous value
				std::cout << currVal << " occurs " << cnt << " times" <<std::endl;
				currVal = val;
				cnt = 1;
			}
		} // while loop ends here
		// remember to print the count for the last value in the file
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	} // outermost if statement ends here
		
	return 0;
}

