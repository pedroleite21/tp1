#ifndef __LISTADEESTACOESDEBIKE_H_
#define __LISTADEESTACOESDEBIKE_H_

#include <iostream>
using namespace std;

class listaDeEstacoesDeBike
{
	EstacaoDeBike *locais; // Vetor com objetos da classe EstacaoDeBike.
	// Este vetor deve ser alocado dinamicamente.
	// Este vetor pode ser substituído por uma lista
	// encadeada.
public:
	void InsereEstacao(EstacaoDeBike V);
	void carregaEstacoes(const char *nomeArquivo);
	void ListaParadasProximasDaEstacao(string estacao);
	void ListaEstacoesDeBike();
};

    Contact GitHub API Training Shop Blog About 

#endif
