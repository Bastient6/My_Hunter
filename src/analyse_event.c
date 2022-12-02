/*
** EPITECH PROJECT, 2022
** csfml
** File description:
** analyse_event
*/

#include "my.h"

void event_mousse(hunter_t *hunter)
{
    if (hunter->event.type == sfEvtMouseButtonPressed) {
        move_rectgun(hunter);
        int i = hunter->event.mouseButton.x;
        int j = hunter->event.mouseButton.y;
        int x = hunter->birdposition.x;
        int y = hunter->birdposition.y;
        if ((x - 60 > i || i < x + 60) && ( y - 60 > j || j < y + 100)){
            hunter->birdposition.x = -110;
            hunter->birdposition.y = rand() % 350;
            my_printf("%i\n", hunter->w);
            hunter->w++;
            move_rect_compteur(hunter);
        }
        if (hunter->w == 10){
            hunter->rectcompteur.left = 499;
            hunter->you_winposition = (sfVector2f){-100, -300};
            sfSprite_setPosition(hunter->you_win, hunter->you_winposition);
            my_printf("%iWIN !!!\n", hunter->w);
        }
    }
}

void analyse_events(hunter_t *hunter)
{
    if (hunter->event.type == sfEvtClosed)
        sfRenderWindow_close(hunter->window);
    if (hunter->event.type == sfEvtKeyPressed
    && hunter->event.key.code == sfKeyEscape)
        sfRenderWindow_close(hunter->window);
    event_mousse(hunter);
}
