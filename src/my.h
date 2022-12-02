/*
** EPITECH PROJECT, 2022
** my hunter
** File description:
** lib
*/

#ifndef MY_H_
    #define MY_H_
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <time.h>

    typedef struct hunter{
        sfMusic *music;
        sfRenderWindow *window;
        sfRenderWindow *menu;
        sfSprite *bird;
        sfVector2f birdposition;
        sfIntRect rectbird;
        sfTexture *Birdtexture;
        sfSprite *game_over;
        sfVector2f game_overposition;
        sfIntRect rectgame_over;
        sfTexture *game_overtexture;
        sfSprite *you_win;
        sfVector2f you_winposition;
        sfIntRect rectyou_win;
        sfTexture *you_wintexture;
        sfSprite *cible;
        sfVector2f cibleposition;
        sfIntRect rectcible;
        sfTexture *cibletexture;
        sfSprite *compteur;
        sfVector2f compteurposition;
        sfIntRect rectcompteur;
        sfTexture *compteurtexture;
        sfSprite *background;
        sfVector2f backgroundposition;
        sfIntRect rectbackground;
        sfTexture *backgroundtexture;
        sfSprite *start;
        sfVector2f startposition;
        sfIntRect rectstart;
        sfTexture *starttexture;
        sfSprite *gun;
        sfVector2f gunposition;
        sfIntRect rectgun;
        sfTexture *Guntexture;
        sfSprite *coeur;
        sfVector2f coeurposition;
        sfIntRect rectcoeur;
        sfTexture *coeurtexture;
        sfClock *clock;
        sfEvent event;
        float seconds;
        int offset_gun;
        int max_value_gun;
        int offset_bird;
        int max_value_bird;
        int w;
        int i;
        sfTime time;

    } hunter_t;

    sfRenderWindow* open_menu(hunter_t *hunter);
    sfRenderWindow *open_window(hunter_t *hunter);
    int close_window(hunter_t *hunter);
    void bird_postion(hunter_t *hunter);
    void move_rectbird(hunter_t *hunter);
    void analyse_events(hunter_t *hunter);
    sfIntRect set_rect_coeur(hunter_t *hunter);
    sfSprite *set_coeur(hunter_t *hunter);
    void sprite_gestion(hunter_t *hunter);
    void destroy(hunter_t *hunter);
    sfSprite *set_bird(hunter_t *hunter);
    sfSprite *set_gun(hunter_t *hunter);
    sfIntRect set_rectgun(hunter_t *hunter);
    sfIntRect set_rect_bird(hunter_t *hunter);
    float set_time(hunter_t *hunter);
    void move_rectgun (hunter_t *hunter);
    void move_rect_coeur(hunter_t *hunter);
    int hunter1(hunter_t *hunter);
    int my_printf(const char * format , ...);
    void event_mousse(hunter_t *hunter);
    void set_texture_rect(hunter_t *hunter);
    void pollevent(hunter_t *hunter);
    sfSprite *set_background (hunter_t *hunter);
    void init (hunter_t *hunter);
    sfSprite *set_compteur(hunter_t *hunter);
    sfIntRect set_rect_compteur(hunter_t *hunter);
    void move_rect_compteur(hunter_t *hunter);
    sfSprite *set_game_over (hunter_t *hunter);
    sfSprite *set_compteur(hunter_t *hunter);
    sfSprite *set_you_win(hunter_t *hunter);
    sfSprite *set_cible(hunter_t *hunter);
    void cible_position(hunter_t *hunter);
    void flag_h(void);
    void menu(hunter_t *hunter);
    sfSprite *set_background_menu (hunter_t *hunter);

#endif /* !MY_H_ */
