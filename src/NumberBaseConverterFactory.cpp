//
//  NumberBaseConverterFactory.cpp
//
//  Created by RedSpiderMkV
//

#include "NumberBaseConverterFactory.hpp"


namespace NumberBaseConverter
{
	ConverterBase *NumberBaseConverterFactory::GetConverter(inputUnit converterType)
	{
		ConverterBase *converter = nullptr;
	
		if(converterType == bin)
		{
			converter = &binConverter_m;
		}
		else if(converterType == dec)
		{
			converter = &decConverter_m;
		}
		else if(converterType == hex)
		{
			converter = &hexConverter_m;
		} // end if
	
		return converter;
	} // end method
} // end namespace
