#ifndef FILES_HPP
#define FILES_HPP

#include <string>
#include <filesystem>
#include <iostream>

namespace etl {
 inline void etMkDir(const std::string& DIRECTORY) {
    try {
      if (!std::filesystem::exists(DIRECTORY)) {
        std::filesystem::create_directories(DIRECTORY);
        if (!std::filesystem::exists(DIRECTORY)) {
          throw std::runtime_error("etl: failed create directories");
        }
      }
    } catch (const std::exception& ex) {
      std::cerr << "etl: error: " << ex.what() << std::endl;
    }
  }
}

#endif /* Files.hpp */