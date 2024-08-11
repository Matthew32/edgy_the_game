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
#include "edgy_captain.h"
#include "edgy_sailor_a.h"
#include "edgy_pozo.h"
#include "edgy_phase4_scene.h"
#include "edgy_phase3_scene.h"
#include "edgy_phase2_scene.h"
#include "edgy_phase1_scene.h"
#include "edgy_start_scene.h"
#include "edgy_visual_scene.h"
#include "bn_display.h"
#include "bn_regular_bg_ptr.h"
#include "bn_regular_bg_items_background_title_1.h"
#include "bn_regular_bg_items_background_phase_1.h"
#include "bn_regular_bg_items_background_phase_2.h"
#include "bn_regular_bg_items_background_phase_3.h"
#include "bn_regular_bg_items_background_phase_4.h"
namespace edgy
{
    void game_loop::start()
    {
        bn::core::init();

        bn::bg_palettes::set_transparent_color(bn::color(16, 0, 0));
    }
    void select_background(char *type)
    {
        // if (type == "background_title_1")
        //{
        //   _DEBUG
        return;
        //}
    }
    void game_loop::loop()
    {
        int displayWidth = bn::display::width();
        int displayHeight = bn::display::height();
        edgy::hanamin hanamin;
        edgy::start_scene start_scene_factory;
        edgy::phase1_scene phase1_scene_factory;
        edgy::phase2_scene phase2_scene_factory;
        edgy::phase3_scene phase3_scene_factory;
        edgy::phase4_scene phase4_scene_factory;

        visual_scene start_scene = start_scene_factory.get_visual_novel();
        visual_scene phase1_scene = phase1_scene_factory.get_visual_novel();
        visual_scene phase2_scene = phase2_scene_factory.get_visual_novel();
        visual_scene phase3_scene = phase3_scene_factory.get_visual_novel();
        visual_scene phase4_scene = phase4_scene_factory.get_visual_novel();

        // How to put in the left side ?.
        int sprite_left_site = -100;
        int sprite_right_site = 100;
        // bn::regular_bg_ptr regular_bg = bn::regular_bg_items::background_title_1.create_bg(0, 20);
        //  bn::sprite_ptr sprite_palette_right_site = bn::sprite_items::pozo.create_sprite(sprite_left_site, 20);
        bool background_set_up = false;
        bn::optional<bn::regular_bg_ptr> regular_bg;

        while (true)
        {
            if (!start_scene.is_next_text_empty())
            {
                if (start_scene.get_sprite() == "captain")
                {
                    regular_bg.reset();
                    regular_bg = bn::regular_bg_items::captain.create_bg(0, 0);
                }
                if (start_scene.get_sprite() == "sailor_a")
                {
                    regular_bg.reset();
                    regular_bg = bn::regular_bg_items::sailor_a.create_bg(0, 0);
                }
                if (start_scene.get_sprite() == "sailor_n")
                {
                    regular_bg.reset();
                    regular_bg = bn::regular_bg_items::sailor_a.create_bg(0, 0);
                }
                if (start_scene.get_sprite() == "sailor_o")
                {
                    regular_bg.reset();
                    regular_bg = bn::regular_bg_items::sailor_a.create_bg(0, 0);
                }
                if (start_scene.get_sprite() == "")
                {
                    regular_bg.reset();
                    regular_bg = bn::regular_bg_items::background_title_1.create_bg(0, 0);
                }
                if (!background_set_up)
                {
                    regular_bg = bn::regular_bg_items::background_title_1.create_bg(0, 20);
                    background_set_up = true;
                    start_scene_factory.start_audio();
                }

                hanamin.text_scene(start_scene.scene());
                start_scene.next_text();
                if (start_scene.is_next_text_empty())
                {
                    background_set_up = false;
                    regular_bg.reset();
                }
            }
            if (start_scene.is_next_text_empty() && !phase1_scene.is_next_text_empty())
            {
                if (!background_set_up)
                {
                    regular_bg = bn::regular_bg_items::background_phase_1.create_bg(0, 20);
                    background_set_up = true;
                }
                hanamin.text_scene(phase1_scene.scene());
                phase1_scene.next_text();
                if (phase1_scene.is_next_text_empty())
                {
                    background_set_up = false;
                    regular_bg.reset();
                }
            }
            if (start_scene.is_next_text_empty() && phase1_scene.is_next_text_empty() && !phase2_scene.is_next_text_empty())
            {
                if (!background_set_up)
                {
                    regular_bg = bn::regular_bg_items::background_phase_2.create_bg(0, 20);
                    background_set_up = true;
                }
                hanamin.text_scene(phase2_scene.scene());
                phase2_scene.next_text();
                if (phase2_scene.is_next_text_empty())
                {
                    background_set_up = false;
                    regular_bg.reset();
                }
            }
            if (start_scene.is_next_text_empty() && phase1_scene.is_next_text_empty() && phase2_scene.is_next_text_empty() && !phase3_scene.is_next_text_empty())
            {
                if (!background_set_up)
                {
                    regular_bg = bn::regular_bg_items::background_phase_3.create_bg(0, 20);
                    background_set_up = true;
                }
                hanamin.text_scene(phase3_scene.scene());
                phase3_scene.next_text();
                if (phase3_scene.is_next_text_empty())
                {
                    background_set_up = false;
                    regular_bg.reset();
                }
            }
            if (start_scene.is_next_text_empty() && phase1_scene.is_next_text_empty() && phase2_scene.is_next_text_empty() && phase3_scene.is_next_text_empty() && !phase4_scene.is_next_text_empty())
            {
                if (!background_set_up)
                {
                    regular_bg = bn::regular_bg_items::background_phase_4.create_bg(0, 20);
                    background_set_up = true;
                }
                hanamin.text_scene(phase4_scene.scene());
                phase4_scene.next_text();
                if (phase4_scene.is_next_text_empty())
                {
                    background_set_up = false;
                    regular_bg.reset();
                }
            }
            //  Draw a filled rectangle at position (10, 20) with size (50, 30) and color (255, 255, 0)
            //  bn::rect(10, 20, 50, 30).draw(bn::color(255, 255, 0));
            bn::core::update();
        }
    };
    void game_loop::instance_captain() {
    };
};