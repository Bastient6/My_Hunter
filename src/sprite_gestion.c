/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** sprite gestion
*/

#include "my.h"

void sprite_gestion(hunter_t *hunter)
{
        sfRenderWindow_clear(hunter->window, sfBlack);
        sfRenderWindow_drawSprite(hunter->window, hunter->background, NULL);
        sfRenderWindow_drawSprite(hunter->window, hunter->bird, NULL);
        sfRenderWindow_drawSprite(hunter->window, hunter->gun, NULL);
        sfRenderWindow_drawSprite(hunter->window, hunter->coeur, NULL);
        sfRenderWindow_drawSprite(hunter->window, hunter->compteur, NULL);
        sfRenderWindow_drawSprite(hunter->window, hunter->game_over, NULL);
        sfRenderWindow_drawSprite(hunter->window, hunter->you_win, NULL);
        sfRenderWindow_drawSprite(hunter->window, hunter->cible, NULL);
        sfRenderWindow_display(hunter->window);
}
