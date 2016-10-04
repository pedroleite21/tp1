#ifndef __PARADA_H_
#define __PARADA_H_

#include <iostream>
using namespace std;

class Parada; // "Forward Reference"

class Parada {
	private:
		int ID;
		float latitude;
		float longitude;
		Veiculo* listaVeiculoQuePassamPoAqui[100];
	public:
		void setID(int _id);
		int getID();
		void setLatitude(int _latitude);
		float getLatitude();
		void setLongitude(int _longitude);
		float getLongitude();
	
		void RegistraVeiculoNaParada(Veiculo *v);
};

#endif
