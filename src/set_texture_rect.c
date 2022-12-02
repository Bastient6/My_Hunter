/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** set texture rect
*/

#include "my.h"

void set_texture_rect(hunter_t *hunter)
{
    sfSprite_setTextureRect(hunter->bird, hunter->rectbird);
    sfSprite_setTextureRect(hunter->gun, hunter->rectgun);
    sfSprite_setTextureRect(hunter->coeur, hunter->rectcoeur);
    sfSprite_setTextureRect(hunter->compteur, hunter->rectcompteur);
}
