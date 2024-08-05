#ifndef EDGY_START_SCENE_H
#define EDGY_START_SCENE_H

#include "edgy_visual_scene.h"
#include "edgy_entity_text.h"

namespace edgy
{
    class start_scene
    {
    protected:
        edgy::entity_text dialog[37] = {
            edgy::entity_text("Narrator", "In a world where pirates", "", "", ""),
            edgy::entity_text("Narrator", "go in the seas to find", "", "", ""),
            edgy::entity_text("Narrator", "the best bread of the world...", "", "", ""),
            edgy::entity_text("Captain", "Today is the day!", "", "", ""),
            edgy::entity_text("Captain", "that we are going", "", "", ""),
            edgy::entity_text("Captain", "to find the best bread!", "", "", ""),
            edgy::entity_text("Sailors", "Like the one's france?!", "", "", ""),
            edgy::entity_text("Captain", "No!", "", "", ""),
            edgy::entity_text("Captain", "Is going to be even better bread!", "", "", ""),
            edgy::entity_text("Sailors", "Like Oiger mother did?", "", "", ""),
            edgy::entity_text("Oiger", "You said that it sucks!", "", "", ""),
            edgy::entity_text("SailorA", "It sucks", "", "", ""),
            edgy::entity_text("SailorC", "I hate that bread!", "", "", ""),
            edgy::entity_text("Sailors", "(laughs) Har! Har!!", "", "", ""),
            edgy::entity_text("Oigers", "sniff...", "", "", ""),
            edgy::entity_text("Captain", "Stop it already!", "", "", ""),
            edgy::entity_text("Captain", "We're going for... ", "", "", ""),
            edgy::entity_text("Captain", "The legendaries Bakeries!", "", "", ""),
            edgy::entity_text("Captain", "the we unlock the 5 stamps", "", "", ""),
            edgy::entity_text("Sailors", "After 5 years... finally..", "", "", ""),
            edgy::entity_text("SailorA", "Har!", "", "", ""),
            edgy::entity_text("SailorA", "Finally we're reach our destiny!", "", "", ""),
            edgy::entity_text("Captain", "You say it my sailors!", "", "", ""),
            edgy::entity_text("Captain", "Set Sail!", "", "", ""),
            edgy::entity_text("Narrator", "With that...", "", "", ""),
            edgy::entity_text("Narrator", "Our pirate heroes...", "", "", ""),
            edgy::entity_text("Narrator", "Starts his journey!", "", "", "")};

    public:
        visual_scene get_visual_novel();
    };
}
#endif