#include "celebrity.h"
#include <string>
#include <iostream>

int main(int argc, char** argv){
	celebrity test("test", 7, "music", false);
	
	std::cout << "name is: " + test.getName() << std::endl;
	std::cout << "how badly(1-10): " + test.getHowBad() << std::endl;
	std::cout << "have met before: " + test.getHaveMet() << std::endl;
	std::cout << "Area of Expertise: " + test.getArea() << std::endl;
}
