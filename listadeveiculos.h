#ifndef __LISTADEVEICULOS_H_
#define __LISTADEVEICULOS_H_

#include <iostream>
#include "veiculo.h"
using namespace std;

class listaDeVeiculos
{
	private:
		Veiculo* transporte; //Deve ser alocado dinâmicamente 
	public:
		listaDeVeiculos();		
		// sets e gets para todos os atributos
		void carregaVeiculos (const char *nomeArquivo);
		void ListaLinhasDeOnibus();
		void ListaParadasDaLinha(string linha);


};

#endif
