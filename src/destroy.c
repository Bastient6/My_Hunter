/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** destroy
*/

#include "my.h"

void destroy(hunter_t *hunter)

{
    sfRenderWindow_destroy(hunter->window);
}
