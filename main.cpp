#include <iostream>
#include <fstream>

using namespace std;

string toUpper(const string &str) {

    if(str.empty())
        return str;
    string temp;
    string temp2;

    int k = 1;
    int last_char_at = 0;
    temp = '*' + temp;

    for (char c:str) {
        temp.push_back(toupper((unsigned char) c));
        if (c != ' ')
            last_char_at = k;
        k++;
    }

    for (int j = 0; j <= last_char_at; j++)
        temp2.push_back((char) temp.at(j));
    temp2.push_back('*');

    return temp2;
}

int main(int args, char **argv) {

    ifstream infile;
    infile.open("infile.txt", ios::in);
    ofstream outfile;
    outfile.open("outfile.txt");

    string str;
    while (getline(infile, str))
        outfile << toUpper(str) << endl;

    return 0;
}