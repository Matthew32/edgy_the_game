#include "bn_core.h"
#include "bn_common.h"
#include "bn_color.h"
#include "bn_bg_palettes.h"
#include "bn_keypad.h"

int main()
{
    bn::core::init();

    bn::bg_palettes::set_transparent_color(bn::color(15,0,0));


    while(true)
    {
        bn::core::update();
    }
}