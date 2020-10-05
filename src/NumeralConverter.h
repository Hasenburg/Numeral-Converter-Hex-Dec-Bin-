#include <string>

#include "ConverterBase.hpp"
#include "NumberBaseConverterFactory.hpp"

using namespace NumberBaseConverter;
std::string convert(inputUnit input, inputUnit output, std::string value) {
    NumberBaseConverterFactory cF;
    ConverterBase *converter = cF.GetConverter(input);
    if (output == bin) {
        return converter->ConvertToBinary(value);
    } else if (output == dec) {
        return converter->ConvertToDecimal(value);
    } else if (output == hex) {
        return converter->ConvertToHexadecimal(value);
    }  // end if
}