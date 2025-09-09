#include "Animal.h"
#include "AnimalsInZoo.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   Animal animal3("Polar Bear", 1774);


   animal2.display();
   animal1->display();
   animal3.display();

   AnimalsInZoo myZoo;
   myZoo.display();

   myZoo.addAnimal(*animal1);
   myZoo.display();

   delete animal1;
   return 0;


}
