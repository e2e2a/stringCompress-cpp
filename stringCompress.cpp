#include <iostream>
#include <string>
using namespace std;

string compressString(const string& str) {
    string compressed;
    int count = 1;

    for (int i = 0; i < str.length(); ++i) {
        if (i + 1 < str.length() && str[i] == str[i + 1]) {
            count++;
        } else {
            compressed += str[i];
            compressed += to_string(count); 
            count = 1;
        }
    }

    cout << "Compressed string: " << compressed << endl;

    return compressed.length() < str.length() ? compressed : str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    compressString(str);

    return 0;
}
