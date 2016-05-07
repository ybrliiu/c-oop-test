/* プレイヤークラス */
struct animal;
typedef struct animal Animal;

Animal* Animal_new(char* id, char* name); /* コンストラクタ */
void Animal_destroy(Animal* this); /* デストラクタ */
char* Animal_get_id(Animal* this);
char* Animal_get_name(Animal* this);
void Animal_set_power(Animal* this, int force, int intelect, int leadership, int popular);
int Animal_power(Animal* this); /* プレイヤーの能力の合計値 */
