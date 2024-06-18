/*
 * Copyright (c) 2020-2022 Gustavo Valiente gustavo.valiente@protonmail.com
 * zlib License, see LICENSE file.
 */

#include "edgy_game_loop.h"

namespace
{
    void source_han_serif_text_scene()
    {
        bn::sprite_text_generator text_generator(source_han_serif_jp_sprite_font);
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 128> text_sprites;
        text_generator.generate(0, -68, "- Source Han Serif | 思源宋体 | 思源宋體 -", text_sprites);
        text_generator.generate(0, -48, "- 思源宋體 香港 | 源ノ明朝 | 본명조 -", text_sprites);
        text_generator.generate(0, -28, "SC 简体中文", text_sprites);
        text_generator.generate(0, -8, "TC  繁體中文（台灣）", text_sprites);
        text_generator.generate(0, 12, "HC 繁體中文（香港）", text_sprites);
        text_generator.generate(0, 32, "JP 日本語（にほんご）", text_sprites);
        text_generator.generate(0, 52, "KR 한국어", text_sprites);
        text_generator.generate(0, 72, "♨➑☆★♡✂♪♫", text_sprites);

        while (!bn::keypad::start_pressed())
        {
            bn::core::update();
        }
    }
}

int main()
{
    edgy::game_loop game_loop;

    game_loop.start();
    game_loop.loop();
}