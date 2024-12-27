// GetPersistentDataPath - https://github.com/GeeTwentyFive/GetPersistentDataPath

#ifndef _GET_PERSISTENT_DATA_PATH_H
#define _GET_PERSISTENT_DATA_PATH_H

#include <stdlib.h>



char *GetPersistentDataPath() {

        #if defined(_WIN32)
                return getenv("APPDATA");
        #elif defined(__linux__)
                return getenv("XDG_CONFIG_HOME");
        #elif defined(__APPLE__)
                return getenv("HOME");
        #else
                return "";
        #endif

}



#endif // _GET_PERSISTENT_DATA_PATH_H
