#ifndef __ZOO_H__
#define __ZOO_H__

#include "Animal.h"

class Zoo {
private:
	Animal* animals[10] = { nullptr };
	int animalCount = 0;

public:
	void addAnimal(Animal* animal);
	void performActions();
	~Zoo();
};

#endif
