#include "Controladora.h"

CControladora::CControladora() {
	mapa = new CMapa();
}

void CControladora::Inicializar() {
	mapa->nivel2();
};

void CControladora::DibujarMapa(Graphics^ g, Bitmap^ bmpPiso, Bitmap^ bmpBloques, Bitmap^ bmpTrofeo, Bitmap^ bmpAgua, Bitmap^ bmpArbol) {
	mapa->DibujarMapa(g, bmpPiso, bmpBloques, bmpTrofeo, bmpAgua, bmpArbol);
};