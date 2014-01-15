
#ifndef SHEPHERD_INCLUDE_SHEPHERD_COMMON_PATHUTIL_H_
#define SHEPHERD_INCLUDE_SHEPHERD_COMMON_PATHUTIL_H_

#include <string>

namespace shepherd {
    namespace common{
        class PathUtil {
        public:
            static void ValidatePath(const std::string &path);
            static void ValidatePath(const std::string &path, bool isSequential);
        };
    }
}
#endif
