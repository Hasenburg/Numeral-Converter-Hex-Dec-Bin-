//
//  NumberBaseConverterFactory.hpp
//
//  Created by RedSpiderMkV
//

#ifndef NumberBaseConverterFactory_hpp
#define NumberBaseConverterFactory_hpp

#include <stdio.h>
#include <string>
#include "ConverterBase.hpp"
#include "BinaryConverter.hpp"
#include "DecimalConverter.hpp"
#include "HexadecimalConverter.hpp"


enum inputUnit {hex, dec, bin};
namespace NumberBaseConverter
{
	class NumberBaseConverterFactory
	{
		private:
			BinaryConverter binConverter_m;
			DecimalConverter decConverter_m;
			HexadecimalConverter hexConverter_m;
		public:
			ConverterBase *GetConverter(inputUnit converterType);
	};
} // end namespace

#endif /* NumberBaseConverterFactory_hpp */
