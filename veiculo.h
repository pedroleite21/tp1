#ifndef __VEICULO_H__
#define __VEICULO_H__

#include <iostream>
#include <string>
#include "parada.h"
using namespace std;

class Parada; // "Forward Reference"

class Veiculo {
	private:
		int ID;
		string nome;
		string linha;
		char tipo; // L=lotação ou O=ônibus
	
		//Veiculo *prox
		//Parada *listaParadas

		Parada* listaParadasPorOndePassa[100];			

	public:
		Veiculo();
		void setID(int _id);
		int getID();
		void setNome(string _nome);
		string getNome();
		void setLinha(string _linha);
		string getLinha();
		void setTipo(char _tipo);
		char getTipo ();

		void RegistraParadaNoVeiculo(Parada *p);
};

#endif
