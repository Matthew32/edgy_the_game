#ifndef EDGY_START_SCENE_H
#define EDGY_START_SCENE_H
#include "edgy_hanamin.h"
namespace edgy
{
    class start_scene
    {
    public:
        const char *dialog[2] = {"text1", "text2"};
        int selectedText = 0;

        const char *scene();
        void nextText();
    };
};
#endif