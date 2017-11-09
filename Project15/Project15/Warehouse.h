#ifndef __WAREHOUSE_H__
#define __WAREHOUSE_H__

#include "Building.h"

using namespace std;

class Warehouse
	:public Building{

public:

	Warehouse(char* name, int wood, int rocks, int wheat) {

		this->name = name;
		this->wood = wood;
		this->rocks = rocks;
		this->wheat = wheat;
	}

    void printResources()const{
	
		cout << "Wood: " << wood << endl;
		cout << "Rocks: " << rocks << endl;
		cout << "Wheat: " << wheat << endl;
		cout << endl;
	}


private:

	int wood, rocks, wheat;


};


#endif // __WAREHOUSE_H__

