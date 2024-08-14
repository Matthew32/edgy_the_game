#include "edgy_end_scene.h"
#include "edgy_entity_text.h"

namespace edgy
{
    entity_text dialog[37] = {
        edgy::entity_text("Y con esto...", "", "", ""),
        edgy::entity_text("Nuestros...", "", "", ""),
        edgy::entity_text("Heroes...", "", "", ""),
        edgy::entity_text("tenian los estampados...", "", "", ""),
        edgy::entity_text("Pues ya esta", "captain", "captain", ""),
        edgy::entity_text("Que hacemos ahora?", "sailor_a", "sailor_a", ""),
        edgy::entity_text("Poner los creditos?", "sailor_n", "sailor_n", ""),
        edgy::entity_text("Correctisimo!", "captain", "captain", ""),
        edgy::entity_text("The end!", "", "", "")};

    visual_scene end_scene::get_visual_novel()
    {
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