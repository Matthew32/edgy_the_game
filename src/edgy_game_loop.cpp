#include "edgy_game_loop.h"
#include "bn_core.h"
#include "bn_math.h"
#include "bn_keypad.h"
#include "bn_sprite_ptr.h"
#include "bn_bg_palettes.h"
#include "bn_string_view.h"
#include "bn_sprite_text_generator.h"
#include "hanamin_sprite_font.h"
#include "source_han_serif_jp_sprite_font.h"
#include "bn_rect.h"
#include "edgy_hanamin.h"
#include "edgy_background.h"
#include "edgy_sprite.h"
#include "edgy_visual.h"

namespace edgy
{
    bn::string_view intro[] =
        {
            "Hello! My name's Omi and I'm a regular junior high student. I love playing video games and visiting local arcades.",
            "I've been to this particular arcade so many times I managed to beat almost every game it has.",
            "But today I'm visiting it for a slightly different reason.",
            "See, there's this one arcade machine that I've never paid any attention to until recently.",
            "Notenogram, a puzzle game about solving picture crosswords that mimicked the look of a piece of a notebook paper.",
            "And apparently, I wasn't the only one avoiding this game for so long.",
            "Last time I visited the arcade I heard its owner telling someone they will remove this machine soon due to high maintenance costs.",
            "Plus every time I passed the Notenogram machine, I never saw anyone playing it or simply being near it.",
            "And so I've decided to dedicate today's afterschool hour to playing this game for myself before it goes away.",
            "After all, despite me hearing about picross before, I've never really given it a proper shot, and this looked liked the perfect opportunity to get into it.",
            "Maybe this could be my new arcade favorite, an arcade puzzle classic, a hidden gem?..",
            "And here I am in front of the machine, staring at its dusty screen, not knowing why do I even have to do this.",
            "After a brief tutorial, I selected one of the simpler puzzles Notenogram had to offer to see if I could solve it."};

    void game_loop::start()
    {
        bn::core::init();

        bn::bg_palettes::set_transparent_color(bn::color(16, 0, 0));
    }

    void game_loop::loop()
    {
        edgy::hanamin hanamin;
        bn::regular_bg_ptr regular_bg = bn::regular_bg_items::background.create_bg(0, 20);
        bn::sprite_ptr sprite_palette = bn::sprite_items::sprite.create_sprite(0, 0);

        while (true)
        {
            // Clear background
            bn::rect(0, 0, 150, 140);
            hanamin.text_scene("text");
            // Draw a filled rectangle at position (10, 20) with size (50, 30) and color (255, 255, 0)
            // bn::rect(10, 20, 50, 30).draw(bn::color(255, 255, 0));
            bn::core::update();
        }
    }
};