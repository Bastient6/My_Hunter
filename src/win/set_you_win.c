/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** set you win
*/


#include "./../my.h"

sfSprite *set_you_win(hunter_t *hunter)
{
    hunter->you_win = NULL;
    hunter->you_wintexture = NULL;
    hunter->you_winposition = (sfVector2f) { -2000, -300};
    hunter->you_win = sfSprite_create();
    hunter->you_wintexture = sfTexture_createFromFile
    ("./src/sprite/you_win.jpeg", NULL);
    sfSprite_setTexture(hunter->you_win, hunter->you_wintexture, sfFalse);
    sfSprite_setPosition(hunter->you_win, hunter->you_winposition);
    return hunter->you_win;
}
