#ifndef VN_TEXT_OUTPUT_H
#define VN_TEXT_OUTPUT_H

#include "bn_sprite_item.h"
#include "bn_sprite_ptr.h"

#include "bn_vector.h"
#include "bn_fixed_point.h"
#include "bn_string.h"
#include "bn_log.h"

#include "bn_sprite_text_generator.h"

#define TEXT_X -108
#define TEXT_Y -20
#define MAX_WIDTH 34
#define MAX_ROWS_8 10
#define MAX_ROWS_16 2

#define TEXT_NAME_X -111
#define TEXT_NAME_Y 28

class text
{
    bn::vector<bn::sprite_ptr, MAX_WIDTH> symbols;
    //this should store indexes for first and last symbols in every line of on-screen text
    //(retrieved once via outputMultipleLines for use in typewriter output)
    bn::vector<int, MAX_ROWS_8> line_starters;
    bn::vector<int, MAX_ROWS_8> line_breakers;
    int line_counter;

public:
    bn::sprite_text_generator* text_gnrtr;

    text();
    text(text*);
    text(bn::sprite_text_generator*);
    text(bn::string_view const&, bn::sprite_text_generator*);
    bool output_Typewriter(bn::string_view const &, int&, int&, int const&);
    bool output_Typewriter(bn::string_view const &, int&, int&, int const&, int const&);
    bool output_NoEffect(bn::string_view const &);

    void outputSingleLine(bn::string_view const &);
    void outputSingleLine(int y, bn::string_view const &);
    void outputSingleLine(int x, int y, bn::string_view const &);

    //object init for multiple line output moved to a separate method
    void initTextOutput(bn::string_view const&);
    //fills out index vectors for separating lines
    void breakIntoMultipleLines(bn::string_view const &);
    //coordinates for blinking cursor
    bn::fixed_point getLastSymbolCoords();

    void clear();
    //redefine all index vectors and line counter
    void redraw(bn::string_view const&);
    ~text();
};

#endif // VN_TEXT_OUTPUT_H
