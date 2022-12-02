/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** rect
*/

#include "./../my.h"

sfIntRect set_rectgun(hunter_t *hunter)
{
        hunter->rectgun.top = 300;
        hunter->rectgun.left = 225;
        hunter->rectgun.width = 150;
        hunter->rectgun.height = 400;
    sfSprite_setTextureRect(hunter->gun, hunter->rectgun);
    return hunter->rectgun;
}
