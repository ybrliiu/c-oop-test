#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "player.h"

Player* Player_new(char* id, char* name) {
  Player* this = malloc( sizeof(Player) );
  if (this == NULL) {
    fprintf(stderr, "memory足りない");
    exit(1);
  };
  strcpy(this->id, id);
  strcpy(this->name, name);
  return this;
}

char* Player_get_id(Player* this) {
  return this->id;
}

char* Player_get_name(Player* this) {
  return this->name;
}

void Player_set_power(Player* this, int force, int intelect, int leadership, int popular) {
  this->force = force;
  this->intelect = intelect;
  this->leadership = leadership;
  this->popular = popular;
}

int Player_power(Player* this) {
  return this->force + this->intelect + this->leadership + this->popular;
}

void Player_destroy(Player* this) {
  free(this);
}

