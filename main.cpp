#include "arraylist.h"

int main() {
	arraylist<int> *list = new arraylist<int>();
	int target;
	int choice;
	while(true) {
		cout << "========== ArrayList ==========" << endl;
		cout << "1번 INSERT" << endl;
		cout << "2번 DELETE" << endl;
		cout << "3번 SHOWINFO" << endl;
		cout << "4번 SEARCH" << endl;
		cout << "5번 EXIT" << endl;
		cout << "option select : [ ]\b\b";
		cin >> choice;
		if (choice == 1) {
			list->INSERT();
		}
		else if (choice == 2) {
			cout << "삭제할 데이터를 입력하세요 : ";
			cin >> target;
			
			if (target == list->LDELETE(target)) {
				cout << target << "을 삭제 완료하였습니다." << endl;
			}
			else if(list->LDELETE(target) == NULL){
				cout << target << "이 존재하지 않습니다." << endl;
			}
		}
		else if (choice == 3) {
			list->LSHOWINFO();
		}
		else if (choice == 4) {
			cout << "찾을 데이터를 입력하세요 : ";
			cin >> target;
			if (list->LSEARCH(target)) {
				cout << target << "이 존재합니다." << endl;
			}
			else {
				cout << target << "이 존재하지 않습니다." << endl;
			}
		}
		else {
			break;
		}
		
	}
	return 0;
}
