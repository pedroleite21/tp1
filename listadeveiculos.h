#ifndef __LISTADEVEICULOS_H_
#define __LISTADEVEICULOS_H_

#include <iostream>
using namespace std;

class listaDeVeiculos
{
	Veiculo* transporte; // Vetor com objetos da classe Veículo. Este votor deve
	// ser alocado dinamicamente.
	// Este vetor pode ser substituído por uma lista
	// encadeada.
public:
	// Construtores ......
	// sets e gets para todos os atributos
	void carregaVeiculos (const char *nomeArquivo);
	void ListaLinhasDeOnibus();
	void ListaParadasDaLinha(string linha);


};

#endif
