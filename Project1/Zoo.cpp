#include "Zoo.h"
#include <iostream>

using namespace std;

void Zoo::addAnimal(Animal* animal) {
	if (animalCount < 10) animals[animalCount++] = animal;
}

void Zoo::performActions() {
	for (const auto& w : animals) {
		w->makeSound();
	}
}

Zoo::~Zoo() {
	for (auto w : animals) {
		if (animalCount == 0) break;
		delete w;
		animalCount--;
	}

	cout << "Zoo destroyed!" << endl;
}
