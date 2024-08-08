#include "edgy_phase3_scene.h"
#include "edgy_visual_scene.h"
#include "edgy_entity_text.h"
namespace edgy
{
    visual_scene phase3_scene::get_visual_novel()
    {
        edgy::entity_text dialog[7] = {
            edgy::entity_text("Here's the second stamp!", "", "", ""),
            edgy::entity_text("Their guardian is right there!", "", "", ""),
            edgy::entity_text("Common SSR!", "", "", ""),
            edgy::entity_text("I just pulled 50 times!", "", "", ""),
            edgy::entity_text("Just 60 left!", "", "", ""),
            edgy::entity_text("He's just playing a chinese gacha!", "", "", ""),
            edgy::entity_text("Let's get the stamp and run away!", "", "", "")};

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