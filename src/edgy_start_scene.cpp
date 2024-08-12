#include "edgy_start_scene.h"
#include "edgy_entity_text.h"
#include "bn_music_items.h"

namespace edgy
{
    entity_text dialog[37] = {
        edgy::entity_text("En un mundo donde...", "", "", ""),
        edgy::entity_text("Las bragas son un tesoro...", "", "", ""),
        edgy::entity_text("Hoy es el dia!", "captain", "captain", ""),
        edgy::entity_text("Hoy nos pondremos boxers", "captain", "captain", ""),
        edgy::entity_text("Ya que es un dia especial", "captain", "captain", ""),
        edgy::entity_text("Es el dia del tanga?", "sailor_a", "sailor_a", ""),
        edgy::entity_text("No!", "captain", "captain", ""),
        edgy::entity_text("Es aun mejor!", "captain", "captain", ""),
        edgy::entity_text("Como?", "sailor_n", "sailor_n", ""),
        edgy::entity_text("Debe ser el dia del latex!", "sailor_a", "sailor_n", ""),
        edgy::entity_text("(risas) Har! Har!!", "sailor_n", "sailor_n", ""),
        edgy::entity_text("ojala...", "sailor_a", "sailor_a", ""),
        edgy::entity_text("Dejad vuestras tonterias", "captain", "captain", ""),
        edgy::entity_text("Hoy iremos en busca de... ", "captain", "captain", ""),
        edgy::entity_text("los slips de mont puig ", "captain", "captain", ""),
        edgy::entity_text("por fin!", "sailor_a", "sailor_a", ""),
        edgy::entity_text("Y el latex?", "sailor_n", "sailor_n", ""),
        edgy::entity_text("Har!", "sailor_n", "sailor_n", ""),
        edgy::entity_text("El latex para el proximo!", "captain", "captain", ""),
        edgy::entity_text("Genial!", "sailor_a", "sailor_a", ""),
        edgy::entity_text("Asi...", "", "", ""),
        edgy::entity_text("Nuestros heroes piratas...", "", "", ""),
        edgy::entity_text("Empezaron su aventura!", "", "", "")};

    void start_scene::start_audio()
    {
        bn::music_items::start_scene.play();
    }

    visual_scene start_scene::get_visual_novel()
    {
        visual_scene visual_scene;
        int count = 0;
        for (entity_text entity : dialog)
        {
            visual_scene.dialog[count] = entity;
            count++;
        }

        return visual_scene;
    }
}