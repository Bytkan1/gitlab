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



void vyvod(const vector<string>& stroki) {
    if (stroki.empty()) {
        cout<<"File empty"<<endl;
    }
    for (const string& stroka : stroki) {
        cout << stroka << '\n';
    }
}




int main() {
    string filename = "1.3.txt";
    vector<string> mystroki = fileread(filename);
    return 0;}
