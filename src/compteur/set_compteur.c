/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** set compteur
*/

#include "./../my.h"

sfSprite *set_compteur(hunter_t *hunter)
{
    hunter->compteur = NULL;
    hunter->compteurtexture = NULL;
    hunter->compteurposition = (sfVector2f){700,50};
    hunter->compteur = sfSprite_create();
    hunter->compteurtexture = sfTexture_createFromFile
    ("./src/sprite/compteur.png", NULL);
    sfSprite_setTexture(hunter->compteur, hunter->compteurtexture, sfFalse);
    sfSprite_setPosition(hunter->compteur, hunter->compteurposition);
    return hunter->compteur;
}
