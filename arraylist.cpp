#include "arraylist.h"

template<typename LDATA>
void arraylist<LDATA>::LINIT() {
	NumofData = 0;
	CurPosition = -1;
}

template<typename LDATA>
bool arraylist<LDATA>::LINSERT(LDATA data) {

		if (CurPosition >= LIST_LEN - 1) {
			return false;
		}
		Arr[NumofData] = data;
		NumofData++;
	return true;
}

template<typename LDATA>
bool arraylist<LDATA>::F_LNEXT() {
	if (NumofData == 0) {
		return false;
	}
	CurPosition = 0;
	Target_Data = Arr[CurPosition];
	return true;
}

template<typename LDATA>
bool arraylist<LDATA>::LNEXT() {
	if (CurPosition >= NumofData - 1) {
		return false;
	}
	Target_Data = Arr[++CurPosition];
	return true;
}

template<typename LDATA>
LDATA arraylist<LDATA>::LDELETE(LDATA data) {

}

template<typename LDATA>
LDATA arraylist<LDATA>::LSEARCH(LDATA data) {
	
}

template<typename LDATA>
void arraylist<LDATA>::LSHOW() {
	if (F_LNEXT()) {
		cout << "data = " << Target_Data << endl;
		while (LNEXT()) {
			cout << "data = " << Target_Data << endl;
		}
	}
	return;
}


