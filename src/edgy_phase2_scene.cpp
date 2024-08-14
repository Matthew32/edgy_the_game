#include "edgy_phase2_scene.h"
#include "edgy_visual_scene.h"
#include "edgy_entity_text.h"
namespace edgy
{
    visual_scene phase2_scene::get_visual_novel()
    {
        edgy::entity_text dialog[7] = {
            edgy::entity_text("Templo 2: Maestre del gacha", "", "", ""),
            edgy::entity_text("Buscaba el estampado..", "captain", "captain", ""),
            edgy::entity_text("... (genshin sounds)", "", "", ""),
            edgy::entity_text("Ya lo cojo yo!", "captain", "captain", ""),
            edgy::entity_text("Templo 1: Maestre del gacha", "", "", ""),
            edgy::entity_text("Completado!", "", "", ""),
        };

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