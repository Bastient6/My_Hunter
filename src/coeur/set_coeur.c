/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** set coeur
*/

#include "./../my.h"

sfSprite *set_coeur(hunter_t *hunter)
{
    hunter->coeur = NULL;
    hunter->coeurtexture = NULL;
    hunter->coeurposition = (sfVector2f){-185,0};
    hunter->coeur = sfSprite_create();
    hunter->coeurtexture = sfTexture_createFromFile
    ("./src/sprite/coeur.png", NULL);
    sfSprite_setTexture(hunter->coeur, hunter->coeurtexture, sfFalse);
    sfSprite_setPosition(hunter->coeur, hunter->coeurposition);
    return hunter->coeur;
}
