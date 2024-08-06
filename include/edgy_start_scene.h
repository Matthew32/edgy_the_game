#ifndef EDGY_START_SCENE_H
#define EDGY_START_SCENE_H

#include "edgy_visual_scene.h"
#include "edgy_entity_text.h"
namespace edgy
{
    class start_scene
    {
    public:
        void start_audio();
        visual_scene get_visual_novel();
    };
}
#endif