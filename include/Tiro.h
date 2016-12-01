#pragma once

#include "Imagem.h"
#include "playAPCBase.h"
#include <stdlib.h>

class Tiro
{
    public:
        Tiro(float x, float y, float tamw, float tamh, int i, int j);
        ~Tiro();

        int getCoordi();
        int getCoordj();

        void setCoordi(int i);
        void setCoordj(int j);

        bool getAtirou();

        void atira();
        void cessa();
        void update();

        void setPosicao(int y);

    private:
        bool atirou;
        int coordx, coordy, coordi, coordj, coordi_original, coordj_original;
        int tiroq, tirog;
        Imagem *instanceimg;
        vector<Tiro*> tiro;

        milliseconds tic;
};

