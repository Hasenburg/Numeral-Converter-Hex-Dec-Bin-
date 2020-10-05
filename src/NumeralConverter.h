#include <string>

#include "ConverterBase.hpp"
#include "NumberBaseConverterFactory.hpp"

using namespace NumberBaseConverter;
std::string convert(inputUnit converterType, std::string value) {
    NumberBaseConverterFactory cF;
    ConverterBase *converter = cF.GetConverter(converterType);
    if (converterType == bin) {
        return converter->ConvertToBinary(value);
    } else if (converterType == dec) {
        return converter->ConvertToDecimal(value);
    } else if (converterType == hex) {
        return converter->ConvertToHexadecimal(value);
    }  // end if
}