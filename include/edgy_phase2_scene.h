#ifndef EDGY_PHASE2_SCENE_H
#define EDGY_PHASE2_SCENE_H
#include "edgy_hanamin.h"
#include "edgy_entity_text.h"
#include "edgy_start_scene.h"
namespace edgy
{
    class phase2_scene
    {
    private:
        edgy::entity_text dialog[37] = {
            edgy::entity_text("Here's the second stamp!", "", "", ""),
            edgy::entity_text("Their guardian is right there!", "", "", ""),
            edgy::entity_text( "Common SSR!", "", "", ""),
            edgy::entity_text( "I just pulled 50 times!", "", "", ""),
            edgy::entity_text( "Just 60 left!", "", "", ""),
            edgy::entity_text("He's just playing a chinese gacha!", "", "", ""),
            edgy::entity_text("Let's get the stamp and run away!", "", "", "")};

    public:
        visual_scene get_visual_novel();
    };
};
#endif