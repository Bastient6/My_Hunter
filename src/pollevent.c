/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** pollevent
*/

#include "my.h"

void pollevent (hunter_t *hunter)
{
    while (sfRenderWindow_pollEvent(hunter->window, &hunter->event))
        analyse_events(hunter);
}
