#include "edgy_visual_scene.h"
#include <iostream>
namespace edgy
{
    char *visual_scene::scene()
    {
        char *test = "test";
        return dialog[selected_text].get_text() ? dialog[selected_text].get_text() : test;
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