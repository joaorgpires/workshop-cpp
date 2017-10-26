#include <iostream>
#include <string>
#include <set>

using namespace std;

set<char> set_of_chars;

int main() {
    string input_string; cin >> input_string;
    // getline(cin, input_string);

    for (int i = 0; i < input_string.length(); i++) {
        set_of_chars.insert(input_string[i]);
    }

    for (set<char>::iterator it = set_of_chars.begin(); it != set_of_chars.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}
