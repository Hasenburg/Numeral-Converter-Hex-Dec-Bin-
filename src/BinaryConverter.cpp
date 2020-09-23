//
//  BinaryConverter.cpp
//
//  Created by RedSpiderMkV
//

#include "BinaryConverter.hpp"
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include "BinaryConverter.hpp"


namespace NumberBaseConverter
{
	std::string BinaryConverter::ConvertToDecimal(std::string number)
	{
		char *end;
		int temp = strtol(number.c_str(), &end, 2);
		
		char temp2[32];
		sprintf(temp2, "%d", temp);
		
		return temp2;
	} // end method
	
	std::string BinaryConverter::ConvertToHexadecimal(std::string number)
	{
		std::string decimalNumber = ConvertToDecimal(number);
		return decimalConverter_m.ConvertToHexadecimal(decimalNumber);
	} // end method
	
	std::string BinaryConverter::ConvertToOctal(std::string number)
	{
		std::string decimalNumber = ConvertToDecimal(number);
		return decimalConverter_m.ConvertToOctal(decimalNumber);
	} // end method
} // end namespace
