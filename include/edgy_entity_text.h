#ifndef EDGY_ENTITY_TEXT
#define EDGY_ENTITY_TEXT

namespace edgy
{
    class entity_text
    {
    private:
        char *text;
        char *sprite;
        char *background;
        char *music;

    public:
        entity_text(char *text, char *sprite, char *background, char *music)
        {
            this->text = text;
            this->sprite = sprite;
            this->background = background;
            this->music = music;
        }
        entity_text()
        {
        }
        char *get_text();
        char *get_background();
        char *get_sprite();
        char *get_music();
    };
};
#endif