/*
Write a program which checks if the lines of two text files
are the same (same number of lines and each line from the
first file should be equal to the line of the second file).
*/

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int getLinesCount(ifstream& file);
bool compareFilesLineByLine (ifstream& file1, ifstream& file2);

int main()
{
	ifstream file1, file2;
	file1.open("file1.txt", ios::binary);
	file2.open("file2.txt", ios::binary);

	int firstFileLinesCount = getLinesCount(file1);
	int secondFileLinesCount = getLinesCount(file2);

 	if(firstFileLinesCount != secondFileLinesCount) {
		cout << "Different number of lines in files!" << endl;
		cout << "file1 has " << firstFileLinesCount << " lines." << endl;
		cout << "file2 has " << secondFileLinesCount << " lines." << endl;
	}

	if(compareFilesLineByLine(file1, file2)) {
        cout << "The two files are the same!" << endl;
	} else {
        cout << "The two files have different content!" << endl;
	}

	return 0;
}

int getLinesCount(ifstream& file){
    string str;
    int count = 0;

	while(!file.eof())	{
		getline(file, str);
		count++;
	}
	file.clear();
	file.seekg(0, ios::beg);

	return count;
}

bool compareFilesLineByLine (ifstream& file1, ifstream& file2){
    char lineFile1[256], lineFile2[256];
	int lineCount = 0;
	bool areFilesTheSame = true;

	while(!file1.eof()) {
		file1.getline(lineFile1, 256);
		file2.getline(lineFile2, 256);
		lineCount++;

		if(strcmp(lineFile1, lineFile2) != 0) {
            areFilesTheSame = false;
            cout << "Difference in line " << lineCount << " was found!" << endl;
		}
	}

	return areFilesTheSame;
}
