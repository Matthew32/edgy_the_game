#include "edgy_phase1_scene.h"
#include "edgy_visual_scene.h"
#include "edgy_entity_text.h"
namespace edgy
{
    visual_scene phase1_scene::get_visual_novel()
    {
        visual_scene visual_scene;

        *visual_scene.dialog = *dialog;

        return visual_scene;
    }
}