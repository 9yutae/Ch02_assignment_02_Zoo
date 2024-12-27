#include "Animal.h"
#include <iostream>

using namespace std;

Animal::~Animal() {
	cout << "Animal destroyed!" << endl;
}

void Dog::makeSound() {
	cout << "Dog barks: Woof! Woof!" << endl;
}

void Cat::makeSound() {
	cout << "Cat barks: Meow! Meow!" << endl;
}

void Cow::makeSound() {
	cout << "Cow barks: Moo! Moo!" << endl;
}
