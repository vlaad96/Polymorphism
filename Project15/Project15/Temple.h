#ifndef __TEMPLE_H__
#define __TEMPLE_H__

#include "Building.h"

using namespace std;

class Temple
	:public Building {

public:

	Temple(char* name, char* god, int priests) {

		this->name = name;
		this->god = god;
		this->priests = priests;
	}

	 void printTemple()const {

		cout << "-- " << name << " --" << endl;
		cout << "God: " << god << endl;
		cout << "Num. priests: " << priests << endl;
		cout << endl;

	}

private:

	char* god;
	int priests;
};
#endif // !__TEMPLE_H__

