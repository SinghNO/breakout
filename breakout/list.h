typedef struct node {
	char name[24];
	struct node *next;
}node;
typedef struct list list;
void initlist(list *l);
void writelist(list *l);
void insertl(list *l, int i, char *name);
void removel(list *l, int i);
char *viewl(list *l, int i);
int emptyl(list *l);
void readlist(list *l);
