#include "edgy_visual_scene.h"
#include "edgy_background_selector.h"
#include <iostream>
namespace edgy
{
    char *visual_scene::scene()
    {
        return dialog[selected_text].get_text();
    };
    char* visual_scene::get_background()
    {
        return dialog[selected_text].get_background();
    }
    void visual_scene::next_text()
    {
        selected_text++;
    }
    bool visual_scene::is_next_text_empty()
    {
        const char *empty = dialog[selected_text].get_text() ? dialog[selected_text].get_text() : "empty";

        return empty == "empty";
    }
}