#include <iostream>
#include <list>

using namespace std;

class File_state {
private:
	FILE *Faddress;
	bool State;
public:
	FILE* put_file(FILE *file) {
		if (file != NULL) {
			State = true;
			return this->Faddress;
		}
		State = false;
	}

	bool get_state() {
		return this->State;
	}

	FILE* get_file() {
		return this->Faddress;
	}

};

class FileExe {
private:
	int OpenFile_Number;
	bool state;
public:
	FileExe() : OpenFile_Number(0) {
		list<File_state> Flist;
	}

	FILE* Fopen(char* Path, char* mode) {
		FILE *temp;
		fopen_s(&temp, Path, mode);
		if (temp != NULL) {
			state = true;
			OpenFile_Number += 1;
		}else {
			state = false;
		}
		return temp;
	}

	void Fcopy(FILE* target, FILE* copy) {
		int ch;
		while ((ch = fgetc(target)) != EOF) {
			putc(ch, stdout);
			fputc(ch, copy);
		}
	}

	void Fstate() {
		if (state == true) {
			cout << "파일열수있음" << endl;
		}
		else {
			cout << "파일열수없음" << endl;
		}
	}

	void ShowInfo() {
		cout << "OpenFile Number is " << OpenFile_Number << endl;
	}

	~FileExe() {

	}
};


int main() {

	FileExe *Filehead = new FileExe();
	FILE *target = (Filehead->Fopen("C:\\Users\\psm97\\Desktop\\copy\\target.txt", "rt"));
	FILE *copy = (Filehead->Fopen("C:\\Users\\psm97\\Desktop\\copy\\copy.txt", "wt"));
	Filehead->Fcopy(target, copy);
	Filehead->Fstate();
	Filehead->ShowInfo();
	return 0;
}

