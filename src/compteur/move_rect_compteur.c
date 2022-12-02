/*
** EPITECH PROJECT, 2022
** csfml
** File description:
** move_rect_compteur
*/

#include "./../my.h"

void move_rect_compteur(hunter_t *hunter)
{
        hunter->rectcompteur.left += 110;
        if (hunter->rectcompteur.left == 550) {
            hunter->rectcompteur.top = 100;
            hunter->rectcompteur.left = 0;
        }
}
