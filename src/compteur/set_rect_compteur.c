/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** rect
*/

#include "./../my.h"

sfIntRect set_rect_compteur(hunter_t *hunter)
{
        hunter->rectcompteur.top = 0;
        hunter->rectcompteur.left = 0;
        hunter->rectcompteur.width = 100;
        hunter->rectcompteur.height = 100;
    sfSprite_setTextureRect(hunter->compteur, hunter->rectcompteur);
    return hunter->rectcompteur;
}
