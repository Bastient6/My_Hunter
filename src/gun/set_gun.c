/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** set gun
*/

#include "./../my.h"

sfSprite *set_gun(hunter_t *hunter)
{
    hunter->gun = NULL;
    hunter->Guntexture = NULL;
    hunter->gunposition = (sfVector2f){350,425};
    hunter->gun = sfSprite_create();
    hunter->Guntexture = sfTexture_createFromFile("./src/sprite/Gun.png", NULL);
    sfSprite_setTexture(hunter->gun, hunter->Guntexture, sfFalse);
    sfSprite_setPosition(hunter->gun, hunter->gunposition);
    return hunter->gun;
}
