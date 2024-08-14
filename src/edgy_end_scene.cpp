#include "edgy_end_scene.h"
#include "edgy_entity_text.h"

namespace edgy
{
    entity_text dialog[37] = {
        edgy::entity_text("And with this...", "", "", ""),
        edgy::entity_text("Our...", "", "", ""),
        edgy::entity_text("Heroes...", "", "", ""),
        edgy::entity_text("had the prints...", "", "", ""),
        edgy::entity_text("Well, that's it", "captain", "captain", ""),
        edgy::entity_text("What do we do now?", "sailor_a", "sailor_a", ""),
        edgy::entity_text("Put the credits?", "sailor_n", "sailor_n", ""),
        edgy::entity_text("Exactly right!", "captain", "captain", ""),
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