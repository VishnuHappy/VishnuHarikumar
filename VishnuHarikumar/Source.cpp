#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;
class Movie {
private:
	string mTitle,lang, lActor,rtimestr,rTime;
	/*struct rtime {
		int hrs,min,sec;
	}T1;
	*/
public:
	Movie() {
		mTitle = "Not provided";
		lang = "Not Provided";
		lActor = "Not provided";
		rTime = "Not provided";
	}
	void inputData() {
		cout << "***************************************************************\n";
		cout << "\t\tINPUT\n";
		cout << "***************************************************************\n";
		cout << "Movie Title:";
		getline(cin, mTitle, '\n');
		cout << "Language:";
		getline(cin, lang, '\n');
		cout << "Lead Actor:";
		getline(cin, lActor, '\n');
		cout << "Run Time (hrs:min:sec):";
		getline(cin, rTime, '\n');
		cout << "***************************************************************\n";
		cout << "***************************************************************\n";

	}
	void Output() {
		cout << "***************************************************************\n";
		cout << "\t\tOUTPUT\n";
		cout << "***************************************************************\n";
		cout << "Name:" << mTitle<<'\n'<<"Run Time:" << rTime<<'\n';
		cout << "Lead Actor:" << lActor << '\n' << "Language:" << lang << '\n';
		cout << "***************************************************************\n";
		cout << "***************************************************************\n";
	}
	void savetxt() {
		ofstream file;
		file.open("Test.txt");
		file << "***************************************************************\n";
		file << "\t\tOUTPUT\n";
		file << "***************************************************************\n";
		file << "Name:" << mTitle << '\n' << "Run Time:" << rTime << '\n';
		file << "Lead Actor:" << lActor << '\n' << "Language:" << lang << '\n';
		file << "***************************************************************\n";
		file << "***************************************************************\n";
		file.close();

	}
	void savepdf() {

	}
	void savenew() {

	}
	
	void saveChoice() {
		char ch;
		cout << "Saving in ...\n1.PDF\n2.TXT\nChoice :";
		cin >> ch;
		switch (ch) {
		case '1':
			savepdf();
		case '2':
			savetxt();
		default:
			cout << "Saving in txt";
			savetxt();
		}

	}
};



void main() {
	Movie m1;
	int i;
	char ch,c1;
	while (1) {
		m1.inputData();
		

		m1.saveChoice();
		cout << "Conitue?(Y/N)";
		cin >> ch;
		cin >> c1;
		if (ch == 'N' || ch == 'n') {
			break;
		}
	}
}