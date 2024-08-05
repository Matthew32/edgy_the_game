#ifndef EDGY_VISUAL_SCENE_H
#define EDGY_VISUAL_SCENE_H
#include "edgy_hanamin.h"
#include "edgy_entity_text.h"
namespace edgy
{
    class visual_scene
    {
    protected:
        int selected_text = 1;

    public:
        entity_text dialog[];
        char* scene();
        void nextText();
        bool isNextTextEmpty();
    };
};
#endif
