/*
** EPITECH PROJECT, 2022
** day13
** File description:
** first window
*/

#include "my.h"

int main(int argc, char **argv)
{
    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h') {
        flag_h();
        return 0;
    }
    struct hunter hunter;
    open_menu(&hunter);
    while (hunter.i == 0)
        menu(&hunter);
    if(hunter.i == 2)
        return 0;
    while (sfRenderWindow_isOpen(hunter.window)) {
        cible_position(&hunter);
        pollevent(&hunter);
        set_texture_rect(&hunter);
        hunter.seconds = set_time(&hunter);
        move_rectbird(&hunter);
        bird_postion(&hunter);
        sfSprite_setPosition(hunter.bird, hunter.birdposition);
        sprite_gestion(&hunter);
    }
    destroy(&hunter);
}
