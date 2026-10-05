#pragma once
#include "Mapa.h"

class CControladora {
private:
	CMapa* mapa;
public:
	CControladora();
	~CControladora() {};

	void Inicializar();
	void DibujarMapa(Graphics^ g, Bitmap^ bmpPiso, Bitmap^ bmpBloques, Bitmap^ bmpTrofeo, Bitmap^ bmpAgua, Bitmap^ bmpArbol);
};
