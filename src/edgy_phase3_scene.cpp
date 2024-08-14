#include "edgy_phase3_scene.h"
#include "edgy_visual_scene.h"
#include "edgy_entity_text.h"
namespace edgy
{
    visual_scene phase3_scene::get_visual_novel()
    {
        edgy::entity_text dialog[7] = {
            edgy::entity_text("Templo 3: develop master", "", "", ""),
            edgy::entity_text("Parece que no hay nadie!", "captain", "captain", ""),
            edgy::entity_text("... (grillos sounds)", "", "", ""),
            edgy::entity_text("chupao!", "captain", "captain", ""),
            edgy::entity_text("Templo 3: develop master", "", "", ""),
            edgy::entity_text("Completado!", "", "", "")};

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