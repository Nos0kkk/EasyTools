#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include <cstdlib>

namespace etl {
  inline void clear() {
    #ifdef _WIN32
      system("cls");
    #else
      system("clear");
    #endif
  }
}

#endif /* Utilities.hpp */