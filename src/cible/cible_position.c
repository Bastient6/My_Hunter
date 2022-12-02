/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** set cible position
*/

#include "./../my.h"

void cible_position(hunter_t *hunter)
{
        hunter->cibleposition.x = hunter->event.mouseMove.x;
        hunter->cibleposition.y = hunter->event.mouseMove.y;
        sfSprite_setPosition(hunter->cible, hunter->cibleposition);
}
