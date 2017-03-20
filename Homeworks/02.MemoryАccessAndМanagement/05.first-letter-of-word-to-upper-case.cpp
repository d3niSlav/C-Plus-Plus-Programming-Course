#include <iostream>
#include <string>

using namespace std;

/*
Write a function void makeTitleCase(string& text)
which changes each word in text to start with a capital letter
(don’t bother with the exact title-case rules about not capitalizing
things like in, from, etc.). Assume the first letter of a word is an
English alphabetical symbol preceded by a non-alphabetical
symbol (so in “we will--rock you”, “we”, “will”, “rock”
and “you” are all considered words which need to be
capitalized). Call the function from main() with a line of text read
from the console and then print the modified line of text.

Example input: On the south Carpathian mountains,a tree is swinging
Expected output: On The South Carpathian Mountains,A Tree Is Swinging
*/

void makeTitleCase(string& text);

int main() {
    string inputText;
    getline(cin, inputText);

    makeTitleCase(inputText);
    cout << inputText << endl;

    return 0;
}

void makeTitleCase(string& text) {
    if(isalpha(text[0])) {
       text[0] = toupper(text[0]);
    }

    for(int i = 1; i < text.size(); i++) {
        if(isalpha(text[i]) && !isalpha(text[i-1])) {
           text[i] = toupper(text[i]);
        }
    }
}
