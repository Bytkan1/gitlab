#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

vector<string> fileread(const string& filename) {
    vector<string> stroki;
    ifstream file(filename);
    if (file.is_open()) {
        cout << "ok" << endl;
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

void vyvod(const vector<string>& stroki) {
    if (stroki.empty()) {
        cout<<"File empty"<<endl;
    }
    for (const string& stroka : stroki) {
        cout << stroka << '\n';
    }
}

int main() {
    string filename = "my_file.txt";
    vector<string> mystroki = fileread(filename);
    vyvod(mystroki);
    return 0;}
