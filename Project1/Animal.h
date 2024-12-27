#ifndef __ANIMAL_H__
#define __ANIMAL_H__

class Animal {
public:
	virtual void makeSound() = 0;
	~Animal();
};

class Dog : public Animal {
public:
	void makeSound();
};

class Cat : public Animal {
public:
	void makeSound();
};

class Cow : public Animal {
public:
	void makeSound();
};

#endif
