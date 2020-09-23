//
//  HexadecimalConverter.hpp
//
//  Created by RedSpiderMkV
//

#ifndef HexadecimalConverter_hpp
#define HexadecimalConverter_hpp

#include <stdio.h>

#include <string>
#include "DecimalConverter.hpp"
#include "ConverterBase.hpp"

namespace NumberBaseConverter
{
	class HexadecimalConverter : public ConverterBase
	{
		private:
			DecimalConverter decimalConverter_m;
			
			int parseIntFromString(std::string number);
		public:
			std::string ConvertToDecimal(std::string number);
			std::string ConvertToBinary(std::string number);
			std::string ConvertToOctal(std::string number);
	};
} // end namespace

#endif /* HexadecimalConverter_hpp */
