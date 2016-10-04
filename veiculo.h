#ifndef __VEICULO_H__
#define __VEICULO_H__

#include <iostream>
#include <string>
using namespace std;

class Veiculo {
	private:
		int ID;
		string nome;
		string linha;
		char tipo; // L=lotação ou O=ônibus
	
		/*  */	
		Parada* listaParadasPorOndePassa[100];	

	public:
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