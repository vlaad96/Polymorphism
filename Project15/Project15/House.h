#ifndef __HOUSE_H__
#define __HOUSE_H__

#include "Building.h"

using namespace std;

class House
	:public Building {

public:

	House(char* name, int floors, int inhabitants, int servants) {

		this->name = name;
		this->floors = floors;
		this->inhabitants = inhabitants;
		this->servants = servants;
	}
	void printHouse()const{

		cout << "Num. floors: " << floors << endl;
		cout << "Num. inhabitants: " << inhabitants << endl;
		cout << "Num. servants: " << servants << endl;
		cout << endl;
	}

private:

	int floors, inhabitants, servants;

};


#endif // !__HOUSE_H__

