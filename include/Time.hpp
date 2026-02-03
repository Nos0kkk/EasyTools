// time control

#ifndef TIME_HPP
#define TIME_HPP

#include <chrono>
#include <thread>
   
namespace etl {
  class wait {
    public:
    
   inline static void sec(int SEC) {
      std::this_thread::sleep_for(std::chrono::seconds(SEC));
    }
    
   inline static void msec(int MSEC) {
      std::this_thread::sleep_for(std::chrono::milliseconds(MSEC));
    }
    
   inline static void min(int MIN) {
      int seconds_in_minute = MIN * 60;
      std::this_thread::sleep_for(std::chrono::seconds(seconds_in_minute));
    }
    
   inline static void hour(int HOUR) {
      int seconds_in_hour = HOUR * 3200;
      std::this_thread::sleep_for(std::chrono::seconds(seconds_in_hour));
    }
  };
  
  // ...
}

#endif /* Time.hpp */