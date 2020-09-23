//
//  HexadecimalConverter.cpp
//
//  Created by RedSpiderMkV
//

#include "HexadecimalConverter.hpp"
#include <cstdio>
#include <sstream>


namespace NumberBaseConverter
{
	std::string HexadecimalConverter::ConvertToBinary(std::string number)
	{
		std::string decimalNum = ConvertToDecimal(number);
		return decimalConverter_m.ConvertToBinary(decimalNum);
	} // end method
	
	std::string HexadecimalConverter::ConvertToOctal(std::string number)
	{
		std::string decimalNum = ConvertToDecimal(number);
		return decimalConverter_m.ConvertToOctal(decimalNum);
	} // end method
	
	std::string HexadecimalConverter::ConvertToDecimal(std::string number)
	{
		int decimalNum = parseIntFromString(number);
		
		char temp[32];
		sprintf(temp, "%d", decimalNum);
		
		return temp;
	} // end method
	
	int HexadecimalConverter::parseIntFromString(std::string number)
	{
		int decimalNum;
		std::stringstream ss;
		ss << std::hex << number;
		ss >> decimalNum;
		
		return decimalNum;
	} // end method
} // end namespace
