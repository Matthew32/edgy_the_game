#include "edgy_phase1_scene.h"
#include "edgy_visual_scene.h"
#include "edgy_entity_text.h"
namespace edgy
{

    visual_scene phase1_scene::get_visual_novel()
    {
        edgy::entity_text dialog[13] = {
            edgy::entity_text("We are here for the stamp", "", "", ""),
            edgy::entity_text("What are you talking about?", "", "", ""),
            edgy::entity_text("A Stamp?", "", "", ""),
            edgy::entity_text("What is that? is good?", "", "", ""),
            edgy::entity_text("You mean the pau of chocolait", "", "", ""),
            edgy::entity_text("What is that? is good?", "", "", ""),
            edgy::entity_text("Of course!", "", "", ""),
            edgy::entity_text("Just look at my fist...", "", "", ""),
            edgy::entity_text("in you're face!", "", "", ""),
            edgy::entity_text("The guardian throws a punch with a stamp", "", "", ""),
            edgy::entity_text("to the captain face", "", "", ""),
            edgy::entity_text("Now the pirates of bakery", "", "", ""),
            edgy::entity_text("had one of the stamps in their hands.", "", "", "")};

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