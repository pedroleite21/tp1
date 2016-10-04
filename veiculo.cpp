#include "veiculo.h"

Veiculo::Veiculo() {
	ID = -1;
	nome = NULL;
	linha = NULL;
	tipo = 'N';

	for (int i=0; i<100; i++) 
		listaParadasPorOndePassa[i] = new Parada();

}

void Veiculo::setID(int _id) {
	ID = _id;
}	
	
int Veiculo::getID(){
	return ID;
}
	
void Veiculo::setNome(string _nome){
	nome = _nome;
}
	
string Veiculo::getNome(){
	return nome;
}
	
void Veiculo::setLinha(string _linha){
	linha = _linha;
}
	
string Veiculo::getLinha(){
	return linha;	
}
	
void Veiculo::setTipo(char _tipo){
	tipo = _tipo;
}
	
char Veiculo::getTipo(){
	return tipo;
}

void Veiculo::RegistraParadaNoVeiculo(Parada *p) {
	char achou = 'F';
	int i = 0;	
	while (!achou) {
			if (listaParadasPorOndePassa[i]->getID() == -1) {
				listaParadasPorOndePassa[i] = p;
				achou = 'V';			
			}
			else
				i++;
	}
}

