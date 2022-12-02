/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** rect
*/

#include "./../my.h"

sfIntRect set_rect_bird(hunter_t *hunter)
{
        hunter->rectbird.top = 0;
        hunter->rectbird.left = 0;
        hunter->rectbird.width = 110;
        hunter->rectbird.height = 110;
    sfSprite_setTextureRect(hunter->bird, hunter->rectbird);
    return hunter->rectbird;
}
