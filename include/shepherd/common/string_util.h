
#ifndef SHEPHERD_INCLUDE_SHEPHERD_COMMON_STRING_UTIL_H_
#define SHEPHERD_INCLUDE_SHEPHERD_COMMON_STRING_UTIL_H_

#include <string>

namespace shepherd {
    namespace common{
        class StringUtil {
        	public:
				static void Split(std::string value, std::string separator);
        };
    }
}
#endif //SHEPHERD_INCLUDE_SHEPHERD_COMMON_STRING_UTIL_H_
