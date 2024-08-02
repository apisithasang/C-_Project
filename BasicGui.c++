#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include<SDL2/SDL_timer.h>

int main(int argc, char *argv[]){

    if (SDL_Init(SDL_INIT_EVERYTHING) ! = 0){
        printf("Effor :  %s\n",SDL_GetError());
    }
    SDL_Window* win = SDL_Create("BasicGui",SDL_WIDOWPOS_CENTERED,SDL_WIDOWPOS_CENTERED,1000,1000,0);
    
    while (1)
    return 0;
}