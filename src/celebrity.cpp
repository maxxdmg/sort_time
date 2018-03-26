#include "celebrity.h"
#include <string>

// Constructor
celebrity::celebrity(std::string n, int b,  std::string a, bool m){
	name = n;
	howBad = b;
	area = a;
	haveMet = m;
}

// Get methods
std::string celebrity::getName(){
	return name;
}

int celebrity::getHowBad(){
	return howBad;
}

bool celebrity::getHaveMet(){
	return haveMet;
}

std::string celebrity::getArea(){
	return area;
}

// Set methods
void celebrity::setName(std::string x){
	this->name = x;
}

void celebrity::setHowBad(int x){
	this->howBad = x;
}

void celebrity::setHaveMet(bool x){
	this->haveMet = x;
}

void celebrity::setArea(std::string x){
	this->area = x;
}
