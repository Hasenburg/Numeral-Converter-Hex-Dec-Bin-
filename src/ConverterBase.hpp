//
//  ConverterBase.hpp
//
//  Created by RedSpiderMkV
//

#ifndef ConverterBase_hpp
#define ConverterBase_hpp

#include <stdio.h>

#include <string>

namespace NumberBaseConverter {
class ConverterBase {
   private:
   public:
    virtual std::string ConvertToBinary(std::string number);
    virtual std::string ConvertToDecimal(std::string number);
    virtual std::string ConvertToHexadecimal(std::string number);
    virtual std::string ConvertToOctal(std::string number);
};
}  // namespace NumberBaseConverter

#endif /* ConverterBase_hpp */
