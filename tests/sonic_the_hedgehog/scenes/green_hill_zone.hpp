#pragma once 

#include <memory>

#include "crosswind/composition/core.hpp"
#include "crosswind/composition/scene.hpp"
#include "crosswind/composition/camera.hpp"

#include "characters/general/sonic.hpp"
#include "characters/general/chunk.hpp"
#include "characters/general/monitor.hpp"


namespace game{
namespace scenes{

    class green_hill_zone;

}// namespace zones
}// namespace game

class game::scenes::green_hill_zone : public cw::composition::scene{
public:
	green_hill_zone(): scene("green_hill_zone"){

	}
	
    virtual void init(){
	    auto main_camera = std::make_shared<cw::composition::camera>(core->video->window->get_size());
	    //set_camera("main_camera", main_camera);

	    /*auto sonic         = this->create_actor<game::characters::sonic>();
	    auto ground        = this->create_actor<game::characters::chunk>();

	    auto sonic_monitor = this->create_actor<game::items::monitor>();

	    ground->set_origin(glm::vec3(0.0f, 0.0f, 0.0f));

	    std::vector<std::string> model_templates = {
		    "gh_ground.json",
	    };

	    std::vector<glm::vec3> model_positions{
		    glm::vec3(0.0f, 0.0f, 0.0f)
	    };

	    std::vector<glm::vec3> model_sizes{
		    glm::vec3(256.0f, 256.0f, 0.0f)
	    };

	    std::vector<glm::vec3> body_positions{
		    glm::vec3(0.0f, -96.0f, 0.0f)
	    };

	    std::vector<glm::vec3> body_sizes{
		    glm::vec3(256.0f, 64.0f, 10.0f)
	    };

	    ground->add_models(model_templates, model_positions, model_sizes);
	    ground->add_rigid_bodies(body_positions, body_sizes);

	    add_actor("sonic", sonic);
	    add_actor("sonic_monitor", sonic_monitor);
        add_actor("ground", ground);

	    core->mixer->load_music("green_hill", core->filesystem->get_file_path("green_hill_zone_bgm.ogg"));
	    core->mixer->load_music("extra_life", core->filesystem->get_file_path("extra_life.ogg"));
	    core->mixer->play_music("green_hill");

	    core->mixer->load_effect("jump", core->filesystem->get_file_path("Jump.wav"));
	    core->mixer->load_effect("stop", core->filesystem->get_file_path("Skid.wav"));
	    core->mixer->load_effect("spin", core->filesystem->get_file_path("Spin.wav"));
	    core->mixer->load_effect("box_break", core->filesystem->get_file_path("Item box break.wav"));*/

    }

    virtual void deinit(){

    }

	void act_one(){

	}

	void act_two(){

	}

	void act_three(){

	}

	virtual void logic(const float& dt){

		/*get_camera("current")->set_position(get_actor("sonic")->get_character("sonic")->get_origin());

		auto& sonic_map = get_collision_map("sonic");
		if(!sonic_map.empty()){
			if(sonic_map.find("sonic_monitor") != sonic_map.end() && get_actor("sonic")->conditions["rolling"]){
				std::dynamic_pointer_cast<game::items::monitor>(get_actor("sonic_monitor"))->destroy();
				this->core->mixer->play_effect("box_break");
				this->core->mixer->play_music("extra_life", 0);
			}
		}*/

		switch(phase){
			case stage_phase::act_1:
				break;

			case stage_phase::act_2:
				break;

			case stage_phase::act_3:
				break;
		}

	}

private:
	enum stage_phase{
		act_1 = 0,
		act_2 = 1,
		act_3 = 2
	};

	unsigned int phase;

};// class stage                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      