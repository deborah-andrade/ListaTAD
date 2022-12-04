#define MAX 5

typedef struct lista Lista;

Lista *criar();

void append(Lista *l, int valor);
int get(Lista *l, int index); 
void remover(Lista *l, int index);
void insert_sorted(Lista *l, int valor); 
void insert(Lista *l, int valor);
int full(Lista *l);
int empty(Lista *l);
int size(Lista *l);
void print(Lista *l);
