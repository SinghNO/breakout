include "main.h"
void readlist(list *l) {
	int count;
	FILE *fp;
	node *prev = (node *)malloc(sizeof(node));
	node *next = (node *)malloc(sizeof(node));
	fp = fopen("savelist", "r");
	if(!fp)
		return;	
	fscanf(fp, "%p %d ", &l->head, &l->count);
	l->head = NULL;
	count = l->count - 1;
	if(count == -1)
		count = 0;
	fscanf(fp, "%s %p", prev->name, &prev->next);
	l->head = prev;	
	while(count--) {
		fscanf(fp, "%s %p ", next->name, &next->next);
		next->next = NULL;
		prev->next = next;
		prev = next;
	}
	next->next = NULL;
	fclose(fp);
}
void initlist(list *l) {
	l->head = NULL;
	l->count = 0;
}
void writelist(list *l) {
	FILE *fp;
	node *t = l->head;
	fp = fopen("savelist", "w+");
	fprintf(fp, "%p %d ", l->head, l->count);
	while(t) {
		fprintf(fp, "%s %p ", t->name, t->next);
		t = t->next;
	}
	fclose(fp);
}
void insertl(list *l, int i, char *name) {
	node *n, *t;
	int j = 1;
	n = (node *)malloc(sizeof(node));
	strcpy(n->name, name);
	n->next = NULL;
	if(!l->head) {
		l->head = n;
		l->count++;
		return;
	}
	t = l->head;
	while(j + 1 < i && t) {
		t = t->next;
		j++;
	}
	if(i == 1) {
		n->next = l->head;
		l->head = n;
		l->count++;
		return;
	}
	n->next = t->next;
	t->next = n;
	l->count++;
}	
void removel(list *l, int i) {
	node *t = l->head, *s;
	int j = 1;
	if(!l->head && i == 1) {
		l->head = t->next;
		free(t);
		return;
	}
	while(j + 1 < i) {
		t = t->next;
		j++;
	}
	s = t->next;
	if(s)
		t->next = s->next;
	free(s);
	l->count--;
}
char *viewl(list *l, int i) {
	node *t = l->head;	
	int j = 1;
	while(j < i && t) {
		t = t->next;
		j++;
	}
	if(t)
		return t->name;
	return NULL;
} 	
int emptyl(list *l) {
	if(l->head)
		return 0;
	return 1;
}
