#include<iostream>
#include<stack>
#include<string>

using namespace std;

/*
Write a program that reads a line from the console containing a
mathematical expression. Write a bool function that checks whether
the brackets in the expression () are placed correctly (assume
everything else is correct, i.e. you don’t need to check for correct
signs, correct variables/numbers, etc.) and returns true if they are
correct and false if they are not correct

Examples of correctly placed brackets: ((a+b)/5-d); a+b; a+(b); ((a))
Examples of incorrectly placed brackets: ((a+b)/5-d; (a+b; a+b); (a))
*/

bool areParanthesesAPair(char opening, char closing);
bool areParanthesesPlacedCorrectly(string expression);

int main() {
	string input;
	cout << "Enter a mathematical expression:  ";
	getline(cin, input);

	if(areParanthesesPlacedCorrectly(input)) {
		cout<<"The brackets from the input are placed CORRECTLY!";
	} else {
		cout<<"The brackets from the input are placed INCORRECTLY!";
	}

    return 0;
}

bool areParanthesesAPair(char opening, char closing) {
	if(opening == '(' && closing == ')') {
        return true;
	} else
	if(opening == '{' && closing == '}') {
        return true;
	} else
	if(opening == '[' && closing == ']') {
        return true;
    }
	return false;
}

bool areParanthesesPlacedCorrectly(string expression) {
	stack<char>  parantheses;

	for(int i = 0; i < expression.length(); i++) {
		if(expression[i] == '(' || expression[i] == '{' || expression[i] == '[') {
			parantheses.push(expression[i]);
		} else
		if(expression[i] == ')' || expression[i] == '}' || expression[i] == ']') {
			if(parantheses.empty() || !areParanthesesAPair(parantheses.top(), expression[i])) {
				return false;
			} else {
				parantheses.pop();
            }
		}
	}

	return parantheses.empty() ? true : false;
}
