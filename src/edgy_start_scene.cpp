#include "edgy_start_scene.h"
#include "edgy_entity_text.h"
#include "bn_music_items.h"

namespace edgy
{

    void start_scene::start_audio()
    {
        bn::music_items::start_scene.play();
    }

    visual_scene start_scene::get_visual_novel()
    {
        entity_text dialog[37] = {
            edgy::entity_text("In a world where...", "", "", ""),
            edgy::entity_text("Panties are a treasure...", "", "", ""),
            edgy::entity_text("Today is the day!", "captain", "captain", ""),
            edgy::entity_text("Today, we wear boxers", "captain", "captain", ""),
            edgy::entity_text("Since it's a special day", "captain", "captain", ""),
            edgy::entity_text("Is it thong day?", "sailor_a", "sailor_a", ""),
            edgy::entity_text("No!", "captain", "captain", ""),
            edgy::entity_text("Its even better!", "captain", "captain", ""),
            edgy::entity_text("How?", "sailor_n", "sailor_n", ""),
            edgy::entity_text("It must be latex day!", "sailor_a", "sailor_n", ""),
            edgy::entity_text("(laughs) Har! Har!!", "sailor_n", "sailor_n", ""),
            edgy::entity_text("I wish...", "sailor_a", "sailor_a", ""),
            edgy::entity_text("Stop your nonsense", "captain", "captain", ""),
            edgy::entity_text("Today, we re going in search of...", "captain", "captain", ""),
            edgy::entity_text("the Mont Puig briefs", "captain", "captain", ""),
            edgy::entity_text("Finally!", "sailor_a", "sailor_a", ""),
            edgy::entity_text("And the latex?", "sailor_n", "sailor_n", ""),
            edgy::entity_text("Har!", "sailor_n", "sailor_n", ""),
            edgy::entity_text("Latex is for the next one!", "captain", "captain", ""),
            edgy::entity_text("Great!", "sailor_a", "sailor_a", ""),
            edgy::entity_text("And so...", "", "", ""),
            edgy::entity_text("Our pirate heroes...", "", "", ""),
            edgy::entity_text("Began their adventure!", "", "", "")};

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