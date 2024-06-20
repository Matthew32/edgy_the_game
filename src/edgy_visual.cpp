#include "edgy_visual.h"

text::text()
{
    BN_LOG("text output class default constructor");
}

text::text(bn::sprite_text_generator *_text_gnrtr)
{
    text_gnrtr = _text_gnrtr;
    BN_LOG("text output class param constructor");
}

text::text(bn::string_view const& script_line, bn::sprite_text_generator *_text_gnrtr)
{
    initTextOutput(script_line);
    text_gnrtr = _text_gnrtr;
    BN_LOG("text output class param constructor 2");
}

text::text(text* text_copy)
{
    this->text_gnrtr = text_copy->text_gnrtr;
    BN_LOG("text output class copy constructor");
}

void text::initTextOutput(bn::string_view const& script_line)
{
    line_counter = script_line.length() / MAX_WIDTH;
    //quick and dirty fix for the "disappearing last line" bug that the code above produces
    if (line_counter == 0 || line_counter < MAX_ROWS_8) ++line_counter;

    breakIntoMultipleLines(script_line);
}

bool text::output_Typewriter(bn::string_view const &line, int &symbol_ptr, int &line_ptr, int const &frames2skip)
{
    if (line_ptr >= line_counter)
    {
        return false;
    }

    symbols.clear();
    if (line_ptr > 0)
        for (int i = 0; i < line_ptr; ++i)
        {
            outputSingleLine(8*i+TEXT_Y, line.substr(line_starters.at(i), line_breakers.at(i)));
        }
    outputSingleLine(8*line_ptr+TEXT_Y, line.substr(line_starters.at(line_ptr), symbol_ptr));

    //indicates start of a new line
    if (++symbol_ptr > line_breakers.at(line_ptr))
    {
        symbol_ptr = 0;
        ++line_ptr;
    }
    return true;
}

bool text::output_Typewriter(bn::string_view const &line, int &symbol_ptr, int &line_ptr, int const &frames2skip, int const& y_pos)
{
    if (line_ptr >= line_counter)
    {
        return false;
    }

    symbols.clear();
    if (line_ptr > 0)
        for (int i = 0; i < line_ptr; ++i)
        {
            outputSingleLine(8*i+y_pos, line.substr(line_starters.at(i), line_breakers.at(i)));
        }
    outputSingleLine(8*line_ptr+y_pos, line.substr(line_starters.at(line_ptr), symbol_ptr));

    //indicates start of a new line
    if (++symbol_ptr > line_breakers.at(line_ptr))
    {
        symbol_ptr = 0;
        ++line_ptr;
    }
    return true;
}

bool text::output_NoEffect(bn::string_view const &line)
{
    symbols.clear();
    for (int i = 0; i < line_counter; ++i)
    {
        outputSingleLine(8*i+TEXT_Y, line.substr(line_starters.at(i), line_breakers.at(i)));
    }
    line_starters.clear();
    line_breakers.clear();
    return false;
}

void text::outputSingleLine(bn::string_view const &line)
{
    text_gnrtr->generate(TEXT_X, TEXT_Y, line, symbols);
}

void text::outputSingleLine(int y, bn::string_view const &line)
{
    text_gnrtr->generate(TEXT_X, y, line, symbols);
}

void text::outputSingleLine(int x, int y, bn::string_view const &line)
{
    text_gnrtr->generate(x, y, line, symbols);
}

void text::breakIntoMultipleLines(bn::string_view const &lines)
{
    int start = 0;
    int substr_length = 0;
    for(int i = 0; i < line_counter && i < MAX_ROWS_8; ++i)
    {
        for (int j = start, k = 0; j <= (start + MAX_WIDTH) && j < lines.length(); ++j, ++k)
        {
            if (lines.at(j) == ' ' || lines.at(j) == lines.back())
            {
                substr_length = k + 1;
            }
            if (substr_length == 0 && k >= MAX_WIDTH)
            {
                substr_length = MAX_WIDTH;
            }
        }
        line_starters.push_back(start);
        line_breakers.push_back(substr_length);
        start += substr_length;
    }
}


bn::fixed_point text::getLastSymbolCoords()
{
    if (!line_breakers.empty())
    {
        bn::fixed_point blinker_point(TEXT_X+8*line_breakers[line_counter-1]+2, TEXT_Y+8*(line_counter-1));
        return blinker_point;
    }
}

void text::clear()
{
    symbols.clear();
    BN_LOG("stg symbols cleared!");
}

void text::redraw(bn::string_view const& script_line)
{
    symbols.clear();
    line_starters.clear();
    line_breakers.clear();

    line_counter = script_line.length() / MAX_WIDTH;
    if (line_counter == 0 || line_counter < MAX_ROWS_8) ++line_counter;

    breakIntoMultipleLines(script_line);
}

text::~text()
{
    symbols.clear();
    line_starters.clear();
    line_breakers.clear();
    delete text_gnrtr;
    BN_LOG("text output class destructor");
}
