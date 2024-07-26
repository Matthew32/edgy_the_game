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
#include "edgy_sprite.h"
#include "edgy_matt.h"
#include "edgy_pozo.h"

#include "edgy_visual.h"
#include "edgy_start_scene.h"
#include "edgy_phase1_scene.h"
#include "edgy_visual_scene.h"
#include "bn_display.h"

namespace edgy
{
    void game_loop::start()
    {
        bn::core::init();

        bn::bg_palettes::set_transparent_color(bn::color(16, 0, 0));
    }

    void game_loop::loop()
    {
        int displayWidth = bn::display::width();
        int displayHeight = bn::display::height();
        edgy::hanamin hanamin;
        edgy::start_scene start_scene;
        edgy::phase1_scene phase1_scene;
        // How to put in the left side ?.
        int sprite_left_site = -100;
        int sprite_right_site = 100;
        bn::regular_bg_ptr regular_bg = bn::regular_bg_items::background_title_1.create_bg(0, 20);
        // bn::sprite_ptr sprite_palette_left_site = bn::sprite_items::matt.create_sprite(sprite_right_site, 20);
        // bn::sprite_ptr sprite_palette_right_site = bn::sprite_items::pozo.create_sprite(sprite_left_site, 20);
        while (true)
        {
            if (!start_scene.isNextTextEmpty())
            {
                hanamin.text_scene(start_scene.scene());
                start_scene.nextText();
            }
            if (start_scene.isNextTextEmpty() && !phase1_scene.isNextTextEmpty())
            {
                hanamin.text_scene(phase1_scene.scene());
                phase1_scene.nextText();
            }
            //  Draw a filled rectangle at position (10, 20) with size (50, 30) and color (255, 255, 0)
            //  bn::rect(10, 20, 50, 30).draw(bn::color(255, 255, 0));
            bn::core::update();
        }
    };
};