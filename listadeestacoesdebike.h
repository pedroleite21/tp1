#include "estacaobike.h"

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
