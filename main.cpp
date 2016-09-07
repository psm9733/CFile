#include "arraylist.h"
#include "arraylist.cpp"

int main() {
	arraylist<int> *list = new arraylist<int>();
	int data;
	int ins_number;
	cout << "몇개의 data를 저장 하시겠습니까? [ ]\b\b";
	cin >> ins_number;
	for(int i = 0; i < ins_number; i++){
		cout << "저장하실 데이터를 입력해주세요 [ ]\b\b";
		cin >> data;
		list->LINSERT(data);
	}
	list->LSHOW();
	return 0;
}

