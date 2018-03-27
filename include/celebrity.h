#ifndef __H__CELEBRITY__
#define __H__CELEBRITY__
#include <string>

class celebrity{
	private:
		std::string name;
		int howBad;
		std::string area;
		bool haveMet;

	public:
		std::string getName();
		int getHowBad();
		std::string getArea();
		bool getHaveMet();

		void setName(std::string n);
		void setHaveMet(bool m);
		void setHowBad(int b);
		void setArea(std::string a);

		celebrity(std::string n, int b, std::string a, bool m);		

		bool operator<(const celebrity& other);
};
#endif
