/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** set cible
*/

#include "./../my.h"

sfSprite *set_cible(hunter_t *hunter)
{
    hunter->cible = NULL;
    hunter->cibletexture = NULL;
    hunter->cible = sfSprite_create();
    hunter->cibletexture = sfTexture_createFromFile
    ("./src/sprite/cible.png", NULL);
    sfSprite_setTexture(hunter->cible, hunter->cibletexture, sfFalse);
    return hunter->cible;
}
