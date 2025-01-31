#pragma once

#include <memory>

#include "crosswind/configuration/settings.hpp"

namespace cw {
    class engine;
}

// forward declarations
namespace cw{
namespace platform{

    class application;
    class filesystem;
    class input;

}// namespace platfomrm
}// namespace cw

namespace cw{
namespace graphical{

    class video;

}// namespace graphical
}// namespace cw


namespace cw{
namespace sound{

    class mixer;

}// namespace sound
}// namespace cw

/*namespace cw{
namespace simulation{

    class physics;

}// namespace simulation
}// namespace cw
*/

namespace cw{
namespace composition{

class core{
public:
    core(const configuration::settings& engine_settings = configuration::settings());

    std::shared_ptr< cw::engine            > engine;
    std::shared_ptr< platform::application > application;
    std::shared_ptr< platform::filesystem  > filesystem;
    std::shared_ptr< platform::input       > input;
    std::shared_ptr< graphical::video 	   > video;
    std::shared_ptr< sound::mixer          > mixer;
    //std::shared_ptr< simulation::physics   > physics;

};// class core


}// namespace composition
}// namespace cw