/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** set game over
*/


#include "./../my.h"

sfSprite *set_game_over (hunter_t *hunter)
{
    hunter->game_over = NULL;
    hunter->game_overtexture = NULL;
    hunter->game_overposition = (sfVector2f) { -2000, -125};
    hunter->game_over = sfSprite_create();
    hunter->game_overtexture = sfTexture_createFromFile
    ("./src/sprite/game_over.png", NULL);
    sfSprite_setTexture(hunter->game_over, hunter->game_overtexture, sfFalse);
    sfSprite_setPosition(hunter->game_over, hunter->game_overposition);
    return hunter->game_over;
}
