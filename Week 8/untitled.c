struct _complex {
	int x;
	int y;
};
typedef struct _complex complex;
complex* myNumber = malloc(sizeof(complex));
(*myNumber).j;
myNumber->j = 10;


