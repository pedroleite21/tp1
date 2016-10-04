#ifndef __LISTADEPARADAS_H_
#define __LISTADEPARADAS_H_

#include <iostream>
using namespace std;

class listaDeParadas
{
	Parada* locais;// Vetor com objetos da classe Parada. Este vetor deve
	// ser alocado dinamicamente.
	// Este vetor pode ser substituído por uma lista
	// encadeada.
public:
	// Construtores ......

	// métodos para manipulação
	void carregaParadas(const char *nomeArquivo);
	void vinculaVeiculos(const char *nomeArquivo);
	// Apresenta as paradas ordenadas pela quantidade de ônibus
	void ImprimeUsoDasParadas();

};

#endif
