/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** set time
*/

#include "./../my.h"

float set_time(hunter_t *hunter)
{
    hunter->seconds = 0;
    hunter->clock = sfClock_create ();
    hunter->time = sfClock_getElapsedTime( hunter->clock );
    hunter->seconds = hunter->time.microseconds / 1000000.0;
    return hunter->seconds;
}
