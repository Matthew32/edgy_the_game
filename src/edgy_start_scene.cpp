#include "edgy_start_scene.h"
#include "edgy_hanamin.h"

namespace edgy
{
    const char *start_scene::scene()
    {
        return dialog[selectedText];
    };

    void start_scene::nextText()
    {
        selectedText++;
    }
};