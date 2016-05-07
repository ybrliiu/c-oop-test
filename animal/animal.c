#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "animal_private.h"

Animal* Animal_new(char* id, char* name) {
  Animal* this = malloc( sizeof(Animal) );
  if (this == NULL) {
    fprintf(stderr, "memory足りない");
    exit(1);
  };
  strcpy(this->id, id);
  strcpy(this->name, name);
  return this;
}

char* Animal_get_id(Animal* this) {
  return this->id;
}

char* Animal_get_name(Animal* this) {
  return this->name;
}

void Animal_set_power(Animal* this, int force, int intelect, int leadership, int popular) {
  this->force = force;
  this->intelect = intelect;
  this->leadership = leadership;
  this->popular = popular;
}

int Animal_power(Animal* this) {
  return this->force + this->intelect + this->leadership + this->popular;
}

void Animal_destroy(Animal* this) {
  free(this);
}

