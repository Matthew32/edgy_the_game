#ifndef EDGY_VISUAL_SCENE_H
#define EDGY_VISUAL_SCENE_H
#include "edgy_hanamin.h"
#include "edgy_entity_text.h"
namespace edgy
{
    class visual_scene
    {
    protected:
        int selected_text = 0;

    public:
        entity_text dialog[37] = {};
        char* scene();
        char* get_background();
        void next_text();
        bool is_next_text_empty();
        char* get_sprite();
    };
};
#endif
