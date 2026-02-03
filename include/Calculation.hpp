//calculation control

#ifndef CALCULATION_HPP
#define CALCULATION_HPP

#include <random>
#include <vector>
#include <string>

std::random_device RD;
std::mt19937 GEN(RD());

namespace etl {
  inline int etRandom(int STARTRAND, int ENDRAND) {
    std::uniform_int_distribution<int> RANDOMET(STARTRAND, ENDRAND);
    return RANDOMET(GEN);
  }
  
  inline constexpr size_t etHash(const char* STRH) noexcept {
    size_t RESULTH = 0;
    while (*STRH) {
      RESULTH += static_cast<size_t>(*STRH++);
    }
    return RESULTH % 1000;
  }
}

#endif /* Calculation.hpp */