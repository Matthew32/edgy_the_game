#include "edgy_phase1_scene.h"
#include "edgy_visual_scene.h"
#include "edgy_entity_text.h"
namespace edgy
{

    visual_scene phase1_scene::get_visual_novel()
    {
        edgy::entity_text dialog[13] = {
            edgy::entity_text("Templo 1: Maestre del kung fu", "", "", ""),
            edgy::entity_text("Buscaba el estampado..", "captain", "captain", ""),
            edgy::entity_text("Aqui solo tenemos boxers", "", "", ""),
            edgy::entity_text("Me sirve!", "captain", "captain", ""),
            edgy::entity_text("Templo 1: Maestre del kung fu", "", "", ""),
            edgy::entity_text("completado", "", "", "")
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