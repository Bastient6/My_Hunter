/*
** EPITECH PROJECT, 2022
** csfml
** File description:
** move_rectgun
*/

#include "./../my.h"

void move_rectgun(hunter_t *hunter)
{
    if (hunter->rectgun.left == 525- 150) {
        hunter->rectgun.left = 225;
    } else {
        hunter->rectgun.left += 150;
    }
}
