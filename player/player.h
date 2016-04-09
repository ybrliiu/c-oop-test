/* プレイヤークラス */
typedef struct {
  char id[12];
  char name[12];
  int force;
  int intelect;
  int leadership;
  int popular;
} Player;

Player* Player_new(char* id, char* name); /* コンストラクタ */
void Player_destroy(Player* this); /* デストラクタ */
char* Player_get_id(Player* this);
char* Player_get_name(Player* this);
void Player_set_power(Player* this, int force, int intelect, int leadership, int popular);
int Player_power(Player* this); /* プレイヤーの能力の合計値 */
