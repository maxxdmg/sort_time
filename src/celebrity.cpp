#include "celebrity.h"
#include <string>

// Constructor
celebrity::celebrity(std::string n, int b,  std::string a, bool m){
	name = n;
	howBad = b;
	area = a;
	haveMet = m;
}

// Operator < Override
bool celebrity::operator<(const celebrity& other){
	if(this->howBad < other.howBad)
		return true;
	else if(this->howBad > other.howBad)
		return false;
	else if(this->howBad == other.howBad){
		if(this->haveMet == true && other.haveMet == false)
			return true;
		else if(this->haveMet == false && other.haveMet == true)
			return false;
		else if(other.haveMet == this->haveMet){
				if(this->name.compare(other.name) < 0)
					return true;
				else
					return false;
		}
	}
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
