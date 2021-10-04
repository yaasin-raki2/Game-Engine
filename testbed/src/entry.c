#include "game.h"

#include <entry.h>

// TODO: remove this
#include <platform/platform.h>

// Define the extern function from the entry.h file to create a game
b8 create_game(game *out_game) {
    // Application configuration
    out_game->app_config.name = "Skyrim";
    out_game->app_config.start_pos_x = 300;
    out_game->app_config.start_pos_y = 100;
    out_game->app_config.start_height = 360;
    out_game->app_config.start_width = 500;

    out_game->update = game_update;
    out_game->render = game_render;
    out_game->initialize = game_initialize;
    out_game->on_resize = game_on_resize;

    // Create the game state
    out_game->state = platform_allocate(sizeof(game_state), FALSE);

    return TRUE;
}