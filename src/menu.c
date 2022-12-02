/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** menu
*/

#include "my.h"

void menu(hunter_t *hunter)
{
    while (sfRenderWindow_pollEvent(hunter->menu, &hunter->event)){
        if (hunter->event.type == sfEvtClosed)
            hunter->i = 2;
        if (hunter->event.type == sfEvtKeyPressed
        && hunter->event.key.code == sfKeyEscape)
            hunter->i = 2;
        if (hunter->event.type == sfEvtKeyPressed && hunter->event.key.code == sfKeySpace){
            init(hunter); 
            hunter->i++;
            sfRenderWindow_close(hunter->menu);
        }
        sfRenderWindow_clear(hunter->menu, sfBlack);
        sfRenderWindow_drawSprite(hunter->menu, hunter->background, NULL);
        sfRenderWindow_display(hunter->menu);
    }
}