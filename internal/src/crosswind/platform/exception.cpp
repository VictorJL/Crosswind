#include <SDL3/SDL.h>

#include "crosswind/platform/exception.hpp"

cw::platform::exception::exception(const std::string& function):
msg_(function + " failed: " + SDL_GetError()){

}

cw::platform::exception::~exception() throw (){

}

const char* cw::platform::exception::what() const throw (){
   return msg_.c_str();
}
 