/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** open window
*/

#include "my.h"

sfRenderWindow* open_window(hunter_t *hunter)
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window = NULL;
    hunter->window = sfRenderWindow_create
    (mode, "My Fisrt Window", sfResize | sfClose, NULL);
    return window;
}
