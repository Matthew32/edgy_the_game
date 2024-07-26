#ifndef EDGY_START_SCENE_H
#define EDGY_START_SCENE_H
#include "edgy_hanamin.h"
#include "edgy_visual_scene.h"
namespace edgy
{
    class start_scene : public visual_scene
    {
    public:
        const char *dialog[37] = {
            "In a world where pirates",
      //      "go in the seas to find",
      //      "the best bread of the world...",
      //  "Captain: Today is the day!",
      //  "Captain: that we are going",
      //  "Captain: to find the best bread!",
      //  "Sailors: Like the one's france?!",
      //  "Captain: No!",
      //  "Captain: Is going to be even better bread!",
      //  "Sailors: Like Oiger mother did?",
      //  "Oiger: You said that it sucks!",
      //  "SailorA: It sucks",
      //  "SailorC: I hate that bread!",
      //  "Sailors: (laughs) Har! Har!!",
      //  "Oigers: sniff...",
      //  "Captain: Stop it already!",
      //  "Captain: We're going for... ",
      //  "Captain: The legendaries Bakeries!",
      //  "Captain: the we unlock the 5 stamps",
      //  "Sailors: After 5 years... finally..",
      //  "SailorA: Har!",
      //  "SailorA: Finally we're reach our destiny!",
      //  "Captain: You say it my sailors!",
      //  "Captain: Set Sail!",
      //  "With that...",
      //  "Our pirate heroes...",
            "Starts his journey!"};
        int selectedText = 0;

        const char *scene();
        void nextText();
        bool isNextTextEmpty();
    };
};
#endif