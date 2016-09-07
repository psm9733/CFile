#pragma once //헤더파일 한번만 불리게함

#define LIST_LEN 100
#include <iostream>
using namespace std;
template <typename LDATA>
class arraylist {
private:
	LDATA Arr[LIST_LEN];
	LDATA Target_Data;
	int NumofData;
	int CurPosition;

public:
	arraylist();
	void LINIT();
	void INSERT();
	bool LINSERT(LDATA data);
	bool F_LNEXT();
	bool LNEXT();
	LDATA LDELETE(LDATA data);
	LDATA LSEARCH(LDATA data);
	void LSHOWINFO();
};

template<typename LDATA>
arraylist<LDATA>::arraylist() : NumofData(0), CurPosition(-1) {

}
template<typename LDATA>
void arraylist<LDATA>::LINIT() {
	NumofData = 0;
	CurPosition = -1;
}


template<typename LDATA>
void arraylist<LDATA>::INSERT() {
	int data;
	int ins_number;
	cout << "몇개의 data를 저장 하시겠습니까? [ ]\b\b";
	cin >> ins_number;
	for (int i = 0; i < ins_number; i++) {
		cout << "저장하실 데이터를 입력해주세요 [ ]\b\b";
		cin >> data;
		arraylist<LDATA>::LINSERT(data);
	}
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
void arraylist<LDATA>::LSHOWINFO() {
	if (F_LNEXT()) {
		cout << "data = " << Target_Data << endl;
		while (LNEXT()) {
			cout << "data = " << Target_Data << endl;
		}
	}
	return;
}
