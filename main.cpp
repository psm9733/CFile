#include "arraylist.h"

int main() {
	arraylist<int> *list = new arraylist<int>();
	list->LINSERT(1);
	list->LINSERT(1);
	list->LINSERT(2);
	list->LINSERT(4);
	list->LINSERT(8);
	list->LSHOW();
	return 0;
}
