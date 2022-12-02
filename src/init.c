/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** init
*/

#include "my.h"

void init (hunter_t *hunter)
{
    hunter->w = 0;
    open_window(hunter);
    set_background(hunter);
    set_bird(hunter);
    set_gun(hunter);
    set_coeur(hunter);
    set_rect_bird(hunter);
    set_rectgun(hunter);
    set_rect_coeur(hunter);
    set_compteur(hunter);
    set_rect_compteur(hunter);
    set_game_over(hunter);
    set_you_win(hunter);
    set_cible(hunter);
    hunter->music = sfMusic_createFromFile("assets/sound.ogg");
    hunter->clock = sfClock_create();
}
