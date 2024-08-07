#include "edgy_start_scene.h"
#include "edgy_entity_text.h"
#include "bn_music_items.h"

namespace edgy
{
    entity_text dialog[37] = {
        edgy::entity_text("In a world where pirates", "", "background_title_1", ""),
        edgy::entity_text("go in the seas to find", "", "", ""),
        edgy::entity_text("the best bread of the world...", "", "", ""),
        edgy::entity_text("Today is the day!", "", "", ""),
        edgy::entity_text("that we are going", "", "", ""),
        edgy::entity_text("to find the best bread!", "", "", ""),
        edgy::entity_text("Like the one's france?!", "", "", ""),
        edgy::entity_text("No!", "", "", ""),
        edgy::entity_text("Is going to be even better bread!", "", "", ""),
        edgy::entity_text("Like Oiger mother did?", "", "", ""),
        edgy::entity_text("You said that it sucks!", "", "", ""),
        edgy::entity_text("It sucks", "", "", ""),
        edgy::entity_text("I hate that bread!", "", "", ""),
        edgy::entity_text("(laughs) Har! Har!!", "", "", ""),
        edgy::entity_text("sniff...", "", "", ""),
        edgy::entity_text("Stop it already!", "", "", ""),
        edgy::entity_text("We're going for... ", "", "", ""),
        edgy::entity_text("The legendaries Bakeries!", "", "", ""),
        edgy::entity_text("the we unlock the 5 stamps", "", "", ""),
        edgy::entity_text("After 5 years... finally..", "", "", ""),
        edgy::entity_text("Har!", "", "", ""),
        edgy::entity_text("Finally we're reach our destiny!", "", "", ""),
        edgy::entity_text("You say it my sailors!", "", "", ""),
        edgy::entity_text("Set Sail!", "", "", ""),
        edgy::entity_text("With that...", "", "", ""),
        edgy::entity_text("Our pirate heroes...", "", "", ""),
        edgy::entity_text("Starts his journey!", "", "", "")};

    void start_scene::start_audio()
    {
        bn::music_items::start_scene.play();
    }

    visual_scene start_scene::get_visual_novel()
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