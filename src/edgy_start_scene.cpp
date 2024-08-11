#include "edgy_start_scene.h"
#include "edgy_entity_text.h"
#include "bn_music_items.h"

namespace edgy
{
    entity_text dialog[37] = {
        edgy::entity_text("In a world where pirates", "", "", ""),
        edgy::entity_text("go in the seas to find", "", "", ""),
        edgy::entity_text("the best bread of the world...", "", "", ""),
        edgy::entity_text("Today is the day!", "captain", "captain", ""),
        edgy::entity_text("that we are going", "captain", "captain", ""),
        edgy::entity_text("to find the best bread!", "captain", "captain", ""),
        edgy::entity_text("Like the one's france?!", "sailor_a", "sailor_a", ""),
        edgy::entity_text("No!", "captain", "captain", ""),
        edgy::entity_text("Is going to be even better bread!", "captain", "captain", ""),
        edgy::entity_text("Like Oiger mother did?", "sailor_n", "sailor_n", ""),
        edgy::entity_text("You said that it sucks!", "sailor_a", "sailor_a", ""),
        edgy::entity_text("It sucks", "sailor_n", "sailor_n", ""),
        edgy::entity_text("I hate that bread!", "sailor_a", "sailor_n", ""),
        edgy::entity_text("(laughs) Har! Har!!", "sailor_n", "sailor_n", ""),
        edgy::entity_text("sniff...", "sailor_o", "sailor_o", ""),
        edgy::entity_text("Stop it already!", "captain", "captain", ""),
        edgy::entity_text("We're going for... ", "captain", "captain", ""),
        edgy::entity_text("The legendaries Bakeries!", "captain", "captain", ""),
        edgy::entity_text("the we unlock the 5 stamps", "captain", "captain", ""),
        edgy::entity_text("After 5 years... finally..", "sailor_a", "sailor_a", ""),
        edgy::entity_text("Har!", "sailor_n", "sailor_n", ""),
        edgy::entity_text("Finally we're reach our destiny!", "sailor_a", "sailor_a", ""),
        edgy::entity_text("You say it my sailors!", "captain", "captain", ""),
        edgy::entity_text("Set Sail!", "captain", "captain", ""),
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