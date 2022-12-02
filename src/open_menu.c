/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** open menu
*/

#include "my.h"

sfRenderWindow* open_menu(hunter_t *hunter)
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* menu= NULL;
    hunter->menu= sfRenderWindow_create
    (mode, "My Fisrt Window", sfResize | sfClose, NULL);
    hunter->i = 0;
    set_background_menu(hunter);
    return menu;
}
