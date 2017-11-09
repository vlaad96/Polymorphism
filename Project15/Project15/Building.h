#ifndef __BUILDING_H__
#define __BUILDING_H__

#include <iostream>

class Building {

public:

	Building(){}

	virtual ~Building(){}

	Building(char* name) {

		this->name = name;
	}

	char* getName()const { return name; }


protected:

	char* name;
};


#endif // !__BUILDING_H__

