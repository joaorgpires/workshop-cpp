#include <iostream>
#include <string>
#include <set>
#include <ctype.h>

using namespace std;

set<char> set_of_chars;

int main() {
    string input_string;
    // cin >> input_string;
    getline(cin, input_string);

    for (int i = 0; i < input_string.length(); i++) {
        if(input_string[i] != ' ') {
            set_of_chars.insert(tolower(input_string[i]));
        }
    }

    for (auto it : set_of_chars) {
        cout << it << endl;
    }

    return 0;
}
