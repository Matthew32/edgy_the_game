#include "edgy_phase1_scene.h"
#include "edgy_visual_scene.h"
#include "edgy_entity_text.h"
namespace edgy
{

    visual_scene phase1_scene::get_visual_novel()
    {
        edgy::entity_text dialog[13] = {
            edgy::entity_text("Temple 1: Kung Fu Master", "", "", ""),
            edgy::entity_text("I was looking for the print...", "captain", "captain", ""),
            edgy::entity_text("We only have boxers here", "", "", ""),
            edgy::entity_text("That works for me!", "captain", "captain", ""),
            edgy::entity_text("Temple 1: Kung Fu Master", "", "", ""),
            edgy::entity_text("completed", "", "", "")};

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