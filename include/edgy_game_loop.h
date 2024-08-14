#ifndef EDGY_GAME_LOOP_H
#define EDGY_GAME_LOOP_H

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
#include "edgy_background_title_1.h"

namespace edgy
{
    class game_loop
    {
    public:
        game_loop()
        {
        }

        void start();
        void loop();
        void instance_captain();
    };
};
#endif