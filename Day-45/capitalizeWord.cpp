#include <iostream>
#include <string> // Include the <string> header for string manipulation

using namespace std;

string capitalizeFirstwordOfString(string str) {
    int i, char_code;
    bool new_word = true;

    for (i = 0; i < str.length(); i++) {
        char_code = int(str[i]);

        if (new_word && isalpha(str[i])) {
            str[i] = char(char_code - 32); // Convert the first letter of the word to uppercase
            new_word = false;
        } else if (str[i] == ' ') {  // When getting the space the new_word enables (true) means just after space it converts capital then rest becomes small and again follow the same.
            new_word = true;
        }
    }

    return str;
}

int main() {
    string str;
    cout << "Enter the string" << endl;
    getline(cin, str);
    string resultString = capitalizeFirstwordOfString(str);
    cout << "Capitalized String--->" << endl;
    cout<<"---------Solution-------"<<endl;
    cout << resultString;
    return 0;
}

