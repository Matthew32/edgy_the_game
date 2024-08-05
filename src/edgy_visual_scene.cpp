#include "edgy_visual_scene.h"
#include <iostream>
namespace edgy
{
    char *visual_scene::scene()
    {
        return dialog[selected_text].get_text();
    };

    void visual_scene::nextText()
    {
        selected_text++;
    }
    bool visual_scene::isNextTextEmpty()
    {
       return dialog[selected_text].get_text() == "";
    }
}