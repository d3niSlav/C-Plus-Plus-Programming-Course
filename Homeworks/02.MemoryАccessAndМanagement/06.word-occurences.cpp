#include <iostream>
#include <string>
using namespace std;

/*
Write a function int occurences(const string& text, const string& search)
which returns the number of times search is contained in text.

Example call:

string text = “Write a function int occurences(const string& text,
const string& search) which returns the number of times search is
contained in text”

string search = “on”;
occurences(text, search);

Expected result: 4

Make a program which reads two lines of text from the console – first the
text, then the search string and prints the number of times search is
contained in text
*/

int occurences(const string& text, const string& search);

int main() {
    string text;
    getline(cin, text);

    string search;
    getline(cin, search);

    cout << "Number of occurrences: " << occurences(text, search);
    return 0;
}

int occurences(const string& text, const string& search) {
    int count = 0;
    size_t nPos = text.find(search, 0);

    while(nPos != string::npos) {
        count++;
        nPos = text.find(search, nPos + 1);
    }

    return count;
}
