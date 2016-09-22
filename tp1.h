#include <iostream>
using namespace std;

class Parada;  // "Forward Reference" para Paradas
// Resolve a questão de referência cruzada
// entre as classes Parada e Veiculo

// *************
// Classe que armazena os dados de UM veículo
// *************
class Veiculo
{
	int ID;
	string nome;
	string linha;
	char tipo; // L=lotação ou O=ônibus

	Parada* listaParadasPorOndePassa[100];
	// Vetor com ponteiros para as Paradas por onde
	// o veículo passa.
	// Este vetor deve ser organizado a fim de
	// representar a ordem em que se dá o
	// deslocamento do veículo

	//Veiculo* prox; // Este atributo deve ser usado somente se for implementada
	// uma lista ENCADEADA de veículos
	//Parada *listaParadas; // Este atributo deve ser usado somente se for
	// implementada uma lista ENCADEADA de Paradas
public:
	// Construtores ......
	// Sugestão: os construtores devem inicializar a lista de paradas com NULL

	/* sets e gets */
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
// *************
// Classe que armazena os dados de UMA parada
// *************
class Parada
{
	int ID;
	float latitude;
	float longitude;
	//Parada* prox;  // Este atributo deve ser usado somente se for implementada
	// uma lista ENCADEADA de paradas
	Veiculo* listaVeiculoQuePassamPoAqui[100];
	//Vetor com ponteiros para os veículos que passam nesta Parada.

public:
	// Construtores ......
	
	
	/* sets e gets */
	void setID(int _id);
	int getID();
	void setLatitude(int _latitude);
	float getLatitude();
	void setLongitude(int _longitude);
	float getLongitude();

	void RegistraVeiculoNaParada(Veiculo *v);
};

// *************
// Classe que armazena os dados de UMA estação de icicleta
// *************
class EstacaoDeBike
{
	int ID;
	string nome;
	float latitude;
	float longitude;
	//EstacaoDeBike* prox; // Este atributo deve ser usado somente se for
	//implementada uma lista ENCADEADA de estações
public:
	// Construtores

	/* sets e gets */
	void setID(int _id);
	int getID();
	void setNome(string _nome);
	string getNome();
	void setLatitude(int _latitude);
	float getLatitude();
	void setLongitude(int _longitude);
	float getLongitude();
};

// *************
// Classe que armazena o conjunto de Veiculos da cidade
// *************
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


// *************
// Classe que armazena o conjunto de Paradas da cidade
// *************
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
// *************
// Classe que armazena o conjunto de Estacoes de Bicicleta da cidade
// *************
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
