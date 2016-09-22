#include "tp1.h"

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

void Parada::setID(int _id){
	ID = _id;
}

int Parada::getID(){
	return ID;
}

void Parada::setLatitude(int _latitude){
	latitude = _latitude;
}

float Parada::getLatitude(){
	return latitude;
}

void Parada::setLongitude(int _longitude){
	longitude = _longitude;
}

float Parada::getLongitude();{
	return longitude;
}

void EstacaoDeBike::setID(int _id){
	ID = _id;
}

int EstacaoDeBike::getID(){
	return ID;
}

void EstacaoDeBike::setNome(string _nome){
	nome = _nome;
}

string EstacaoDeBike::getNome(){
	return nome;
}

void EstacaoDeBike::setLatitude(int _latitude){
	latitude = _latitude;
}

float EstacaoDeBike::getLatitude(){
	return latitude;
}

void EstacaoDeBike::setLongitude(int _longitude){
	longitude = _longitude;
}

float EstacaoDeBike::getLongitude(){
	return longitude;
}

