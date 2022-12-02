/*
** EPITECH PROJECT, 2022
** csfml
** File description:
** move_rect_coeur
*/

#include "./../my.h"

void move_rect_coeur(hunter_t *hunter)
{
        hunter->rectcoeur.width -= 115;
        if (hunter->rectcoeur.width == 180) {
            hunter->game_overposition = (sfVector2f){0,0};
            sfSprite_setPosition(hunter->game_over, hunter->game_overposition);
        }
}
