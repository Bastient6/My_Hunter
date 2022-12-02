/*
** EPITECH PROJECT, 2022
** csfml
** File description:
** bird position
*/

#include "./../my.h"

void bird_postion(hunter_t *hunter)
{
        if (hunter->birdposition.x < 900){
                hunter->birdposition.x += 0.05;
        }
        if (hunter->birdposition.x >= 900){
                hunter->birdposition.x = -110;
                hunter->birdposition.y = rand() % 350;
                move_rect_coeur(hunter);
        }
}
