#ifndef __ESTACAOBIKE_H_
#define __ESTACAOBIKE_H_

#include <iostream>
#include <string>
using namespace std;

class EstacaoDeBike {
	public:
		int ID;
		string nome;
		float latitude;
		float longitude;
	private:
		void setID(int _id);
		int getID();
		void setNome(string _nome);
		string getNome();
		void setLatitude(int _latitude);
		float getLatitude();
		void setLongitude(int _longitude);
		float getLongitude();
};

#endif
