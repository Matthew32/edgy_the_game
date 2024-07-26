#ifndef EDGY_SCENE_H
#define EDGY_SCENE_H
#include "edgy_hanamin.h"
namespace edgy
{
    class visual_scene
    {
    public:
        int selectedText = 0;

        const char *scene();
        void nextText();
        bool isNextTextEmpty();
    };
};
#endif
