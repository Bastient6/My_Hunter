/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** rect
*/

#include "./../my.h"

sfIntRect set_rect_coeur(hunter_t *hunter)
{
        hunter->rectcoeur.top = 300;
        hunter->rectcoeur.left = 0;
        hunter->rectcoeur.width = 525;
        hunter->rectcoeur.height = 700;
    sfSprite_setTextureRect(hunter->coeur, hunter->rectcoeur);
    return hunter->rectcoeur;
}
