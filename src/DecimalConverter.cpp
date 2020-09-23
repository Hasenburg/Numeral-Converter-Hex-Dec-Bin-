//
//  DecimalConverter.cpp
//
//  Created by RedSpiderMkV
//

#include "DecimalConverter.hpp"
#include <cstdio>
#include <sstream>

namespace NumberBaseConverter
{
	/* Region Public Methods */
	
	std::string DecimalConverter::ConvertToBinary(std::string decStr)
	{
		int number = parseIntFromString(decStr);
		return convertNumber(number, 2);
	} // end method
	
	std::string DecimalConverter::ConvertToHexadecimal(std::string decStr)
	{
		int number = parseIntFromString(decStr);
		return convertNumber(number, 16);
	} // end method
	
	std::string DecimalConverter::ConvertToOctal(std::string decStr)
	{
		int number = parseIntFromString(decStr);
		return convertNumber(number, 8);
	} // end method
	
	/* End Region Public Methods */
	
	/* Region Private Methods */
	
	std::string DecimalConverter::convertNumber(int number, int base)
	{
		std::string numRep("");
		
		if(number / base != 0)
		{
			numRep.append(convertNumber(number / base, base));
		} // end if
		
		char temp[2];
		sprintf(temp, "%d", number % base);
		numRep.append(temp);
		
		return numRep;
	} // end method
	
	int DecimalConverter::parseIntFromString(std::string number)
	{
		int decNumber;
		std::stringstream ss;
		ss << std::dec << number;
		ss >> decNumber;
		
		return decNumber;
	} // end method
	
	/* End Region Private Methods */
} // end namespace
