#include "Game.h"

Game::Game()
{
}

bool Game::Init()
{
    window = SDL_CreateWindow( "test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if( window == NULL ) return false;
    renderer = SDL_CreateRenderer( window, -1, SDL_RENDERER_PRESENTVSYNC );
    if( renderer == NULL ) return false;
    return true;
}

void Game::Run()
{
    bool quit = false;
    while( quit == false )
    {
        while( SDL_PollEvent( &event ) )
        {
            if( event.type == SDL_QUIT ) quit = true;
        }
    }
    SDL_DestroyWindow( window );
    SDL_DestroyRenderer( renderer );
    SDL_Quit();
}

