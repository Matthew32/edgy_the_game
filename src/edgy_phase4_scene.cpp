#include "edgy_phase4_scene.h"
#include "edgy_visual_scene.h"
#include "edgy_entity_text.h"
namespace edgy
{
    visual_scene phase4_scene::get_visual_novel()
    {
        edgy::entity_text dialog[7] = {
            edgy::entity_text("Templo 4: osfar maestre", "", "", ""),
            edgy::entity_text("Perdon el estamp..", "captain", "captain", ""),
            edgy::entity_text("Coje mi tanga y sal", "", "", ""),
            edgy::entity_text("Por supuesto jefe!", "captain", "captain", ""),
            edgy::entity_text("Templo 4: osfar maestre", "", "", ""),
            edgy::entity_text("completado", "", "", "")};

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