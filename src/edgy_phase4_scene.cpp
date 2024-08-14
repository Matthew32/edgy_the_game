#include "edgy_phase4_scene.h"
#include "edgy_visual_scene.h"
#include "edgy_entity_text.h"
namespace edgy
{
    visual_scene phase4_scene::get_visual_novel()
    {
        edgy::entity_text dialog[7] = {
            edgy::entity_text("Temple 4: Osfar Master", "", "", ""),
            edgy::entity_text("Sorry, the print...", "captain", "captain", ""),
            edgy::entity_text("Grab my thong and leave", "", "", ""),
            edgy::entity_text("Of course, boss!", "captain", "captain", ""),
            edgy::entity_text("Temple 4: Osfar Master", "", "", ""),
            edgy::entity_text("Completed", "", "", "")};

        visual_scene visual_scene;
        int count = 0;
        for (entity_text entity : dialog)
        {
            visual_scene.dialog[count] = entity;
            count++;
        }

        return visual_scene;
    }
}