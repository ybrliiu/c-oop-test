#include <stdio.h>
#include "player/player.h"

int main(int argc, char *argv[]) {
  
  char id[12] = "iriya";
  char name[12] = "イリヤ";
  Player* test_player;

  test_player = Player_new(id, name);
  printf("プレイヤーの名前: %s\n", Player_get_name(test_player));
  printf("プレイヤーのID: %s\n", Player_get_id(test_player));
  Player_set_power(test_player, 100, 1, 58, 1);
  printf("プレイヤーの能力値合計: %d\n", Player_power(test_player));
  Player_destroy(test_player);

  return 0;
}

