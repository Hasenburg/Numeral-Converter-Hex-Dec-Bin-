//
//  BinaryConverter.hpp
//
//  Created by RedSpiderMkV
//

#ifndef BinaryConverter_hpp
#define BinaryConverter_hpp

#include <stdio.h>
#include <string>
#include "DecimalConverter.hpp"
#include "ConverterBase.hpp"


namespace NumberBaseConverter
{
	class BinaryConverter : public ConverterBase
	{
		private:
			DecimalConverter decimalConverter_m;
		public:
			std::string ConvertToDecimal(std::string number);
			std::string ConvertToHexadecimal(std::string number);
			std::string ConvertToOctal(std::string number);
	};
} // end namespace

#endif /* BinaryConverter_hpp */
