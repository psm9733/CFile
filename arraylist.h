#ifndef __ARRAYLIST_H__
#define __ARRAYLIST_H__
#define LIST_LEN 100
using namespace std;
template <typename LDATA>
class arraylist {
private:
	LDATA Arr[LIST_LEN];
	LDATA Target_Data;
	int NumofData;
	int CurPosition;
	 
public:
	arraylist(): NumofData(0), CurPosition(-1){

	}
	void LINIT();
	bool LINSERT(LDATA data);
	bool F_LNEXT();
	bool LNEXT();
	LDATA LDELETE(LDATA data);
	LDATA LSEARCH(LDATA data);
	void LSHOW();
};

#endif
