#ifndef EDGY_START_SCENE_H
#define EDGY_START_SCENE_H
#include "edgy_hanamin.h"
namespace edgy
{
    class start_scene
    {
    public:
        const char *dialog[73] = {
            "Lila: Hey Omar",
            "have you seen the news",
            "about that new grocery",
            "shopping simulator game.",
            "Omar: (Scoffs)",
            "A grocery shopping simulator?",
            "Seriously?",
            "Sounds incredibly boring.",
            "Lila: Don't knock it",
            "till you try it!",
            "Apparently, it's all about",
            "navigating the supermarket",
            "dodging slow walkers",
            "and grabbing the best",
            "deals before they disappear",
            "Omar: (Raises an eyebrow)",
            "Sounds more stressful than fun.",
            "Lila: But that's the challenge!",
            "Imagine if there",
            "were different levels.",
            "Like, level one is just grabbing",
            "a loaf of bread",
            "but then you have to deal",
            "with angry geese",
            "guarding the bakery section",
            "Omar: (Chuckles) Angry geese?",
            "Now that's something",
            "I'd pay to see"
            "Lila: Right? ",
            "And then level two",
            "could be a whole",
            "Thanksgiving dinner shopping",
            "spree with a tight deadline.",
            "You gotta strategize",
            "compare prices"
            "and avoid those impulse buys.",
            "Omar: Okay, I gotta admit",
            "that does sound like it",
            "could be interesting.",
            "Maybe even a bit educational.",
            "Like,",
            "teaching people",
            "about unit pricing and stuff.",
            "Lila: Exactly!",
            "Plus, there could be power-ups!",
            "Like a \"double speed\"",
            "boost to zip past slowpokes",
            "or a \"discount coupon finder\"",
            "to snag those hidden bargains.",
            "Omar: You're really",
            "getting into this",
            "aren't you?",
            "Lila: (Grinning)",
            "I can't help it!",
            "It just sounds like",
            "a fun and unique way",
            "to turn a mundane task",
            "into a game."
            "Who knows",
            "maybe it'll even inspire people",
            "to cook more at home.",
            "Omar: Alright, alright.",
            "You've convinced me.",
            "When this grocery",
            "shopping simulator comes out",
            "I'm giving it a try.",
            "Just as long as there",
            "are no angry geese in real life.",
            "Lila: (Laughs) Deal!",
            "But hey, who knows?",
            "Maybe conquering ",
            "the virtual geese will",
            " give you the courage to face",
            "a real one someday."};
        int selectedText = 0;

        const char *scene();
        void nextText();
    };
};
#endif