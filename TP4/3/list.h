typedef int element;

typedef struct ListStruct * List;

//return 1 if list is empty, else 0
int empty(List list);

//return the head element of the list
element head(List list);

//return the queue of the list
List tail(List list);

//Renvoie une liste vide
List conse();

//Return the list where head is e and tail is list
List cons(List list, element e);