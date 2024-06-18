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

namespace edgy
{
    void game_loop::start()
    {
        bn::core::init();

        bn::bg_palettes::set_transparent_color(bn::color(16, 0, 0));
    }

    void game_loop::loop()
    {
        edgy::hanamin hanamin;
        bn::regular_bg_ptr regular_bg = bn::regular_bg_items::background.create_bg(0, 0);
        
        while (true)
        {
            // Clear background
            bn::rect(0, 0, 150, 140);

            // Draw a filled rectangle at position (10, 20) with size (50, 30) and color (255, 255, 0)
            // bn::rect(10, 20, 50, 30).draw(bn::color(255, 255, 0));
            hanamin.text_scene("Add new text");
            bn::core::update();
        }
    }
};