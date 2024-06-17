#include "edgy_hanamin.h"

#include "bn_core.h"
#include "bn_math.h"
#include "bn_keypad.h"
#include "bn_sprite_ptr.h"
#include "bn_bg_palettes.h"
#include "bn_string_view.h"
#include "bn_sprite_text_generator.h"

#include "hanamin_sprite_font.h"
#include "source_han_serif_jp_sprite_font.h"

namespace edgy
{
    void hanamin::text_scene(char *text)
    {
        bn::sprite_text_generator text_generator(hanamin_sprite_font);
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 128> text_sprites;
        text_generator.generate(0, 72, text, text_sprites);

        while (!bn::keypad::start_pressed())
        {
            bn::core::update();
        }
    }
};