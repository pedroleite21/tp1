#include "veiculo.h"

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
	
char Veiculo::getTipo (){
	return tipo;
}
