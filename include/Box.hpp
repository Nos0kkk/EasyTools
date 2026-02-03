#ifndef BOX_HPP
#define BOX_HPP

namespace etl {
  template <typename B>
  class Box {
    public:
    Box(B val): value{val} {}
    
    inline void printb() {
      if (value == true) {
        std::cout << "true" << std::endl;
      } else if (value == false) {
        std::cout << "false" << std::endl;
      } else {
        std::cout << value << std::endl;
      }
    }
    
    inline void setValue(B newval) {
      value = newval;
    }
    
    private:
    B value;
  };
}

#endif /* Box.hpp */