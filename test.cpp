#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    int credit = 0;
    string line;
	ifstream in_user_merch("Sunny Ling Ling Ling PurInfo.txt");
	if (in_user_merch.is_open()){
		while (getline(in_user_merch, line)){
			cout << line << "\n";
		}
		in_user_merch.close();
	} else {
		ofstream out_user_merch;
		out_user_merch.open("Sunny Ling Ling Ling PurInfo.txt");
		out_user_merch << credit << endl;
	}
    return 0;
}