#include "edgy_phase1_scene.h"
#include "edgy_hanamin.h"

namespace edgy
{
    const char *phase1_scene::scene()
    {
        return dialog[selectedText];
    };

    void phase1_scene::nextText()
    {
        selectedText++;
    }
    bool phase1_scene::isNextTextEmpty()
    {
        return selectedText >= sizeof(dialog);
    }
};