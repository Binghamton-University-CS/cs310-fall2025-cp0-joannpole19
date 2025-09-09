#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H

#include "Animal.h"

class AnimalsInZoo{
private:
	int numAnimals;
	Animal animal;

public:
	AnimalsInZoo();			 //zoo with zero animals
	AnimalsInZoo(const Animal& a);   //zoo with one animal
		
	void addAnimal(const Animal& a);  //add or replace animal
	void display() const;
};

#endif
