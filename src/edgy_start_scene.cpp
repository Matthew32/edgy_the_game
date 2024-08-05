#include "edgy_start_scene.h"
namespace edgy
{
    visual_scene start_scene::get_visual_novel()
    {
        visual_scene visual_scene;

        *visual_scene.dialog = *dialog;

        return visual_scene;
    }
}