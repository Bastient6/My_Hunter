/*
** EPITECH PROJECT, 2022
** csfml
** File description:
** move_rect
*/

#include "./../my.h"

void move_rectbird(hunter_t *hunter)
{
    int offset = 110;
    int max_value = 330;
    if (hunter->seconds > 0.00001) {
        sfClock_restart (hunter->clock) ;
        if (hunter->rectbird.left == max_value - offset) {
            hunter->rectbird.left = 0;
        } else {
            hunter->rectbird.left += offset;
        }
    }
}
