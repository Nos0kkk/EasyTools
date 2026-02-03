#include <iostream>
#include <EasyTools/EasyTools.hpp>

int main() {
  etl::Box<int> box = 78;
  box.printb();
  
  etl::wait::sec(3);
  
  box.setValue(67);
  box.printb();
  return 0;
}