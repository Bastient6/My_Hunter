/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** set bird
*/

#include "./../my.h"

sfSprite *set_bird(hunter_t *hunter)
{
    srand(time( NULL ) );
    hunter->bird = NULL;
    hunter->Birdtexture = NULL;
    hunter->birdposition = (sfVector2f){-185,rand()%500};
    hunter->bird = sfSprite_create();
    hunter->Birdtexture = sfTexture_createFromFile
    ("./src/sprite/bird.png", NULL);
    sfSprite_setTexture(hunter->bird, hunter->Birdtexture, sfFalse);
    sfSprite_setPosition(hunter->bird, hunter->birdposition);
    return hunter->bird;
}
