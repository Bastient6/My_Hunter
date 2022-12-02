/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** set start
*/

#include "my.h"

sfSprite *set_start (hunter_t *hunter)
{
    hunter->start = NULL;
    hunter->starttexture = NULL;
    hunter->startposition = (sfVector2f){0,0};
    hunter->start = sfSprite_create();
    hunter->starttexture = sfTexture_createFromFile
    ("./src/sprite/fond.jpg", NULL);
    sfSprite_setTexture(hunter->start, hunter->starttexture, sfFalse);
    sfSprite_setPosition(hunter->start, hunter->startposition);
    return hunter->start;
}
