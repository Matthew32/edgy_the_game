#ifndef EDGY_PHASE_1_SCENE_H
#define EDGY_PHASE_1_SCENE_H
#include "edgy_hanamin.h"
#include "edgy_visual_scene.h"
namespace edgy
{
    class phase1_scene : public visual_scene
    {
    public:
        const char *dialog[1] = {
            "Phase1"};
        int selectedText = 0;

        const char *scene();
        void nextText();
        bool isNextTextEmpty();
    };
};
#endif