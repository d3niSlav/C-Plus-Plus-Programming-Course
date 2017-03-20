#include <iostream>
#include <string>

using namespace std;

/*
Write a program which is given a line of text,
another line with a find string and another
line with a replace string. Any part of text
which matches the find string should be replaced
with the replace string. Print the resulting text
on the console.

Hint: things like string.find(), string.insert(),
string.replace() might be useful

Example input: I am the night. Dark Night! No, not the knight
               night
               day
Example output: I am the day. Dark Night! No, not the kday;
*/

string replaceString(string subject, const string& search, const string& replace) {
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != string::npos) {
         subject.replace(pos, search.length(), replace);
         pos += replace.length();
    }
    return subject;
}

int main() {
    string text;
    getline(cin, text);

    string textToFind;
    getline(cin, textToFind);

    string textToReplace;
    getline(cin, textToReplace);

    cout << replaceString(text, textToFind, textToReplace) << endl;
    return 0;
}
