#include <stdio.h>
#include <stdlib.h>

#include "display.h"

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

int main(int argc, char *argv[]) {

    memset(&app, 0, sizeof(App));

    initSDL();

    atexit(cleanup);

    while (1) {
        prepareScene();

        doInput();

        presentScene();

        SDL_Delay(16);
    }

    return 0;
}