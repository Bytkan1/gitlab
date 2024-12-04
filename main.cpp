#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

vector<string> fileread(const string& filename) {
    vector<string> stroki;
    ifstream file(filename);
    if (file.is_open()) {
        cout << "Open is ok!" << endl;
        string stroka;
        while (getline(file, stroka)) {
            stroki.push_back(stroka);
        }
        file.close();
    } else {
        cout << "error" << endl;
    }
    return stroki;
}




int main() {
    string filename = "1.3.txt";
    vector<string> mystroki = fileread(filename);
    return 0;}
