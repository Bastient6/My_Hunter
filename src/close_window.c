/*
** EPITECH PROJECT, 2022
** csfml
** File description:
** close window
*/

#include "my.h"

int close_window(hunter_t *hunter)
{
        sfRenderWindow_close(hunter->window);
        sfRenderWindow_close(hunter->menu);
        return 84;
}
