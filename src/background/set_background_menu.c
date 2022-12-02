/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** set background
*/

#include "./../my.h"

sfSprite *set_background_menu (hunter_t *hunter)
{
    hunter->background = NULL;
    hunter->backgroundtexture = NULL;
    hunter->backgroundposition = (sfVector2f){50,0};
    hunter->background = sfSprite_create();
    hunter->backgroundtexture = sfTexture_createFromFile
    ("./src/sprite/start.png", NULL);
    sfSprite_setTexture(hunter->background, hunter->backgroundtexture, sfFalse);
    sfSprite_setPosition(hunter->background, hunter->backgroundposition);
    return hunter->background;
}
