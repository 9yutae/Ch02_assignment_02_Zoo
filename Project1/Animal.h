#ifndef __ANIMAL_H__
#define __ANIMAL_H__

class Animal {
public:
	virtual void makeSound() = 0;
	virtual ~Animal() = default;
};

class Dog : public Animal {
public:
	void makeSound() override;
};

class Cat : public Animal {
public:
	void makeSound() override;
};

class Cow : public Animal {
public:
	void makeSound() override;
};

#endif
