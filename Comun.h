#pragma once
#define MAX_FILAS 26
#define MAX_COLUMNAS 26

#define ANCHO_IMAGEN 64
#define ALTO_IMAGEN 64

enum ETipoBloque {
	piso = 1,
	destruible=2,
	noDestruible=3,
	agua=4,
	arbol=5,
	trofeo=9
};

enum EDireccion {
	ninguno,
	arriba,
	abajo,
	izquierda,
	derecha
};

class CComun {

};

