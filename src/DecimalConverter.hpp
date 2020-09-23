//
//  DecimalConverter.hpp
//
//  Created by RedSpiderMkV
//

#ifndef DecimalConverter_hpp
#define DecimalConverter_hpp

#include <stdio.h>
#include<string>
#include "ConverterBase.hpp"

namespace NumberBaseConverter
{
	class DecimalConverter : public ConverterBase
	{
		private:
			int parseIntFromString(std::string number);
			std::string convertNumber(int number, int base);
		public:
			std::string ConvertToBinary(std::string decStr);
			std::string ConvertToHexadecimal(std::string decStr);
			std::string ConvertToOctal(std::string decStr);
	};
}

#endif /* DecimalConverter_hpp */
