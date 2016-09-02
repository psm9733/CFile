#include <iostream>
using namespace std;
class FileExe {
private:
	int OpenFile_Number;
	bool def;
public:
	FileExe(): OpenFile_Number(0) {

	}
	FILE* fopen(char* Path, char* mode) {
		FILE *temp = new FILE();
		temp = fopen(Path, mode);
		temp != NULL ? def = true : def = false;
		return temp;
	}
	void File_State() {
		def == true ? cout << "파일열수있음" << endl : cout << "파일열수없음" << endl;	
	}
	void ShowInfo() {
		cout << "OpenFile Number is " << OpenFile_Number << endl;
	}
};


int main() {

	FileExe *Filehead = new FileExe();
	FILE *target = (Filehead->fopen("target.txt", "rt"));
	FILE *copy = (Filehead->fopen("copy.txt", "wt"));
	Filehead->ShowInfo();
}
