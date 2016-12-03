#pragma once

#include "State.h"
#include "Background.h"
#include "Imagem.h"
#include "Mateus.h"
#include "Ovelha.h"
#include "Tiro.h"
#include "playAPCBase.h"
#include <vector>
#include <stdlib.h>

const int MAP_X_DIM = 10;
const int MAP_Y_DIM = 10;

class State_play : public State{
    private:
        typedef enum{
            VAZIO,
            OVELHA,
            TIRO,
            ICC,
            INVADIDO
        }cellState;

        cellState mapaLogico[MAP_X_DIM][MAP_Y_DIM + 1];
        Ponto mapaVisu[MAP_X_DIM][MAP_Y_DIM + 1]; //esse +1 � para ajustar o ataque do Mateus, somente para a visualiza��o do ataque
        Background *instancebg;
        Imagem *instanceimg;
        Mateus *mateus;
        vector<Ovelha*> ovelhas;
        Tiro *tiro;
        milliseconds *tic, timer;
        int dificuldade;

        void updateMateus(int ovelhas);
        int updateOvelhas();

        unsigned int random_uint(unsigned int limit);

    public:
        void load(tipoGame stack = GAME_NO_CHANGE);
        void unload();
        tipoGame update();
        void render();

        void checkCollision();
};
