#include "Mapa.h"

CMapa::CMapa() {
};

void CMapa::setNivel(int nivel) {
    this->nivel = nivel;
}

int CMapa::getNivel() {
    return this->nivel;
}

CBloque* CMapa::getBloque(int i, int j) {
    return mapa[i][j];
}

CBloque* (*CMapa::getMapa())[MAX_COLUMNAS] {
    return this->mapa;
}

void CMapa::nivel1() {
    int tmpNivel1[MAX_FILAS][MAX_COLUMNAS] = {
      1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
      1, 2, 1, 2, 1, 2, 1, 1, 1, 2, 1, 2, 1,
      1, 2, 1, 2, 1, 3, 1, 2, 1, 2, 1, 2, 1,
      1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1,
      1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1,
      1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1,
      1, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1, 2, 1,
      1, 1, 3, 1, 1, 1, 2, 1, 1, 2, 1, 3, 1,
      1, 1, 2, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1,
      1, 1, 1, 1, 1, 2, 2, 2, 1, 3, 1, 1, 1,
      1, 1, 1, 1, 1, 2, 9, 2, 1, 1, 1, 1, 1
    };

    std::cout << "Inicializando nivel 1\n";
    for (int i = 0; i < MAX_FILAS; i++) {
        for (int j = 0; j < MAX_COLUMNAS; j++) {
            if (tmpNivel1[i][j] == 1) {
                mapa[i][j] = new CBloque(ETipoBloque::piso, 0);
            }
            if (tmpNivel1[i][j] == 2) {
                mapa[i][j] = new CBloque(ETipoBloque::destruible, 2);
            }
            if (tmpNivel1[i][j] == 3) {
                mapa[i][j] = new CBloque(ETipoBloque::noDestruible, -1);
            }
            if (tmpNivel1[i][j] == 9) {
                mapa[i][j] = new CBloque(ETipoBloque::trofeo, 1);
            }
        }
    }
}
void CMapa::nivel2() {
    int tmpNivel2[MAX_FILAS][MAX_COLUMNAS] = {
      1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1,
    3, 3, 1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1, 1,
    3, 3, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    3, 3, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 1, 1, 5, 5, 5, 5, 1, 1, 5, 5,
    2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 1, 1, 5, 5, 5, 5, 1, 1, 5, 5,
    2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 1, 1, 2, 2, 2, 2,
    1, 1, 1, 1, 2, 2, 1, 1, 5, 5, 5, 5, 1, 1, 5, 5, 5, 5, 5, 5, 1, 1, 2, 2, 2, 2,
    2, 2, 2, 2, 1, 1, 1, 1, 5, 5, 2, 2, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    2, 2, 2, 2, 1, 1, 1, 1, 5, 5, 2, 2, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1,
    5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 1, 1, 3, 3, 1, 1, 2, 2, 1, 1, 1, 3, 1, 1, 1, 1,
    5, 5, 5, 5, 5, 5, 1, 1, 5, 5, 1, 1, 3, 3, 1, 1, 2, 2, 1, 1, 1, 3, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 2, 2, 2, 2,
    1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 2, 2, 2, 2,
    1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1,
    2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1,
    2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1,
    2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 9, 9, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 9, 9, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
    };

    std::cout << "Inicializando nivel 1\n";
    for (int i = 0; i < MAX_FILAS; i++) {
        for (int j = 0; j < MAX_COLUMNAS; j++) {
            if (tmpNivel2[i][j] == 1) {
                mapa[i][j] = new CBloque(ETipoBloque::piso, 0);
            }
            if (tmpNivel2[i][j] == 2) {
                mapa[i][j] = new CBloque(ETipoBloque::destruible, 2);
            }
            if (tmpNivel2[i][j] == 3) {
                mapa[i][j] = new CBloque(ETipoBloque::noDestruible, -1);
            }
            if (tmpNivel2[i][j] == 4) {
                mapa[i][j] = new CBloque(ETipoBloque::arbol, 1);
            }
            if (tmpNivel2[i][j] == 5) {
                mapa[i][j] = new CBloque(ETipoBloque::agua, 0);
            }
            if (tmpNivel2[i][j] == 9) {
                mapa[i][j] = new CBloque(ETipoBloque::trofeo, 1);
            }
        }
    }
}
void CMapa::nivel3() {
    int tmpNivel3[MAX_FILAS][MAX_COLUMNAS] = {
     1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4,
    4, 4, 4, 4, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 4, 4, 4, 4,
    4, 4, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 4, 4,
    4, 4, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 4, 4,
    1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 4, 4, 2, 2, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 4, 4, 2, 2, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 2, 2, 4, 4, 4, 4, 2, 2, 4, 4, 4, 4, 2, 2, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 2, 2, 4, 4, 4, 4, 2, 2, 4, 4, 4, 4, 2, 2, 1, 1, 1, 1, 1, 1,
    4, 4, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 4, 4,
    4, 4, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 4, 4,
    4, 4, 4, 4, 1, 1, 1, 1, 2, 2, 4, 4, 2, 2, 4, 4, 2, 2, 1, 1, 1, 1, 4, 4, 4, 4,
    4, 4, 4, 4, 1, 1, 1, 1, 2, 2, 4, 4, 2, 2, 4, 4, 2, 2, 1, 1, 1, 1, 4, 4, 4, 4,
    5, 5, 5, 5, 5, 5, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 5, 5, 5, 5, 5, 5,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 3, 1, 3, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 3, 1, 3, 1,
    1, 3, 1, 3, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 3, 1, 3, 1,
    2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2,
    2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2,
    3, 1, 3, 1, 3, 1, 1, 3, 1, 1, 1, 2, 9, 9, 2, 1, 1, 1, 3, 1, 1, 3, 1, 3, 1, 3,
    3, 1, 3, 1, 3, 1, 1, 3, 1, 1, 1, 2, 9, 9, 2, 1, 1, 1, 3, 1, 1, 3, 1, 3, 1, 3
    };

    std::cout << "Inicializando nivel 3\n";
    for (int i = 0; i < MAX_FILAS; i++) {
        for (int j = 0; j < MAX_COLUMNAS; j++) {
            if (tmpNivel3[i][j] == 1) {
                mapa[i][j] = new CBloque(ETipoBloque::piso, 0);
            }
            if (tmpNivel3[i][j] == 2) {
                mapa[i][j] = new CBloque(ETipoBloque::destruible, 2);
            }
            if (tmpNivel3[i][j] == 3) {
                mapa[i][j] = new CBloque(ETipoBloque::noDestruible, -1);
            }
            if (tmpNivel3[i][j] == 4) {
                mapa[i][j] = new CBloque(ETipoBloque::arbol, 1);
            }
            if (tmpNivel3[i][j] == 5) {
                mapa[i][j] = new CBloque(ETipoBloque::agua, 0);
            }
            if (tmpNivel3[i][j] == 9) {
                mapa[i][j] = new CBloque(ETipoBloque::trofeo, 1);
            }
        }
    }
}

void CMapa::nivel4() {
    int tmpNivel4[MAX_FILAS][MAX_COLUMNAS] = {
    1, 1, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 1, 1,
    1, 1, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 1, 1,
    4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4,
    4, 4, 4, 4, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 4, 4,
    4, 4, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 3, 3,
    4, 4, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1,
    3, 3, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1,
    1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 1, 1,
    1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 2, 1, 1, 1,
    5, 5, 1, 1, 1, 2, 1, 1, 3, 1, 1, 1, 3, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1,
    5, 5, 1, 1, 1, 2, 1, 1, 3, 1, 1, 1, 3, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 5, 5, 5, 5,
    1, 1, 1, 1, 2, 2, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 5, 5, 5, 5,
    1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1,
    1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1,
    1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 1, 1, 4, 4,
    1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 4, 4,
    4, 4, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 4, 4, 4, 4,
    4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4,
    3, 3, 4, 4, 1, 1, 1, 1, 1, 1, 1, 2, 9, 9, 2, 1, 1, 1, 1, 1, 4, 4, 4, 4, 3, 3,
    3, 3, 4, 4, 1, 1, 1, 1, 1, 1, 1, 2, 9, 9, 2, 1, 1, 1, 1, 1, 4, 4, 4, 4, 3, 3
    };

    std::cout << "Inicializando nivel 4\n";
    for (int i = 0; i < MAX_FILAS; i++) {
        for (int j = 0; j < MAX_COLUMNAS; j++) {
            if (tmpNivel4[i][j] == 1) {
                mapa[i][j] = new CBloque(ETipoBloque::piso, 0);
            }
            if (tmpNivel4[i][j] == 2) {
                mapa[i][j] = new CBloque(ETipoBloque::destruible, 2);
            }
            if (tmpNivel4[i][j] == 3) {
                mapa[i][j] = new CBloque(ETipoBloque::noDestruible, -1);
            }
            if (tmpNivel4[i][j] == 4) {
                mapa[i][j] = new CBloque(ETipoBloque::arbol, 1);
            }
            if (tmpNivel4[i][j] == 5) {
                mapa[i][j] = new CBloque(ETipoBloque::agua, 0);
            }
            if (tmpNivel4[i][j] == 9) {
                mapa[i][j] = new CBloque(ETipoBloque::trofeo, 1);
            }
        }
    }
}

void CMapa::nivel5() {
    int tmpNivel5[MAX_FILAS][MAX_COLUMNAS] = {
    2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2,
    2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1, 1, 1,
    5, 5, 5, 5, 5, 5, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 5, 1, 1, 3, 3, 1, 1, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 5, 1, 1, 3, 3, 1, 1, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 5, 1, 1, 3, 3, 1, 1, 5, 5, 5,
    5, 5, 5, 5, 5, 5, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 5, 1, 1, 3, 3, 1, 1, 5, 5, 5,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 1, 1, 2, 2, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 1, 1, 2, 2, 1, 1, 1, 1, 1,
    2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1,
    2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2,
    1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2, 3, 3,
    1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2, 3, 3,
    1, 1, 1, 1, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1,
    1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 2, 9, 9, 2, 1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1,
    1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 2, 9, 9, 2, 1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1
    };

    std::cout << "Inicializando nivel 5\n";
    for (int i = 0; i < MAX_FILAS; i++) {
        for (int j = 0; j < MAX_COLUMNAS; j++) {
            if (tmpNivel5[i][j] == 1) {
                mapa[i][j] = new CBloque(ETipoBloque::piso, 0);
            }
            if (tmpNivel5[i][j] == 2) {
                mapa[i][j] = new CBloque(ETipoBloque::destruible, 2);
            }
            if (tmpNivel5[i][j] == 3) {
                mapa[i][j] = new CBloque(ETipoBloque::noDestruible, -1);
            }
            if (tmpNivel5[i][j] == 4) {
                mapa[i][j] = new CBloque(ETipoBloque::arbol, 1);
            }
            if (tmpNivel5[i][j] == 5) {
                mapa[i][j] = new CBloque(ETipoBloque::agua, 0);
            }
            if (tmpNivel5[i][j] == 9) {
                mapa[i][j] = new CBloque(ETipoBloque::trofeo, 1);
            }
        }
    }
}


void CMapa::DibujarMapa(Graphics^ g, Bitmap^ bmpPiso, Bitmap^ bmpBloques, Bitmap^ bmpTrofeo, Bitmap^ bmpAgua, Bitmap^ bmpArbol) {
    int X = 0, Y = 0;
    int trofeoX = -1, trofeoY = -1;
    for (int i = 0; i < MAX_FILAS; i++) {
        X = 0;
        for (int j = 0; j < MAX_COLUMNAS; j++) {
            if (getBloque(i, j)->getTipo() == ETipoBloque::piso) {
                Rectangle rectPiso = Rectangle(0 * ANCHO_IMAGEN, 0 * ALTO_IMAGEN, ANCHO_IMAGEN, ALTO_IMAGEN);
                Rectangle zoom = Rectangle(X, Y, ANCHO_IMAGEN * 0.5, ALTO_IMAGEN * 0.5);
                g->DrawImage(bmpPiso, zoom, rectPiso, GraphicsUnit::Pixel);
            }
            if (getBloque(i, j)->getTipo() == ETipoBloque::destruible) {
                Rectangle rectDestruible = Rectangle(0 * ANCHO_IMAGEN, 0 * ALTO_IMAGEN, ANCHO_IMAGEN, ALTO_IMAGEN);
                Rectangle zoom = Rectangle(X, Y, ANCHO_IMAGEN * 0.5, ALTO_IMAGEN * 0.5);
                g->DrawImage(bmpBloques, zoom, rectDestruible, GraphicsUnit::Pixel);
            }
            if (getBloque(i, j)->getTipo() == ETipoBloque::noDestruible) {
                Rectangle rectNoDestruible = Rectangle(0 * ANCHO_IMAGEN, 1 * ALTO_IMAGEN, ANCHO_IMAGEN * 0.5, ALTO_IMAGEN * 0.5);
                Rectangle zoom = Rectangle(X, Y, ANCHO_IMAGEN * 0.5, ALTO_IMAGEN * 0.5);
                g->DrawImage(bmpBloques, zoom, rectNoDestruible, GraphicsUnit::Pixel);
            }
            if (getBloque(i, j)->getTipo() == ETipoBloque::arbol && i % 2 == 0 && j % 2 == 0) {
                Rectangle rectArbol = Rectangle(0 * ANCHO_IMAGEN, 0 * ALTO_IMAGEN, ANCHO_IMAGEN, ALTO_IMAGEN);
                Rectangle zoom = Rectangle(X, Y, ANCHO_IMAGEN * 1.0, ALTO_IMAGEN * 1.0);
                g->DrawImage(bmpArbol, zoom, rectArbol, GraphicsUnit::Pixel);
            }
            if (getBloque(i, j)->getTipo() == ETipoBloque::agua) {
                Rectangle rectAgua = Rectangle(0 * ANCHO_IMAGEN, 0 * ALTO_IMAGEN, ANCHO_IMAGEN, ALTO_IMAGEN);
                Rectangle zoom = Rectangle(X, Y, ANCHO_IMAGEN * 0.5, ALTO_IMAGEN * 0.5);
                g->DrawImage(bmpAgua, zoom, rectAgua, GraphicsUnit::Pixel);
            }
            if (getBloque(i, j)->getTipo() == ETipoBloque::trofeo && i % 2 == 0 && j % 2 == 0) {
                Rectangle rectTrofeo = Rectangle(0 * ANCHO_IMAGEN, 0 * ALTO_IMAGEN, ANCHO_IMAGEN, ALTO_IMAGEN);
                Rectangle zoom = Rectangle(X, Y, ANCHO_IMAGEN * 1.0, ALTO_IMAGEN * 1.0);
                g->DrawImage(bmpTrofeo, zoom, rectTrofeo, GraphicsUnit::Pixel);
                /*trofeoX = X;
                trofeoY = Y;*/
            }

            X += ANCHO_IMAGEN * 0.42;
        }
        Y += ALTO_IMAGEN * 0.42;
    }
    /*if (trofeoX >= 0) {
        Rectangle rectTrofeo = Rectangle(0, 0, ANCHO_IMAGEN, ALTO_IMAGEN);
        Rectangle zoom = Rectangle(trofeoX, trofeoY, ANCHO_IMAGEN * 1.0, ALTO_IMAGEN * 1.0);
        g->DrawImage(bmpTrofeo, zoom, rectTrofeo, GraphicsUnit::Pixel);
    }*/
}