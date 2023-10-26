using namespace std;

#include <iostream>
#include <fstream>
#include <string>
#include <map>

void printStatsString(map<string, int> dict, string header) {
    string line;
    cout << "\n\n" << header << "\n";
    for (const auto& element : dict) {
        cout << element.first << ": " << element.second << "\n";
    }
}

bool isThisLetter(int asciiNum) {
    bool isLowLatin = asciiNum <= 90 && asciiNum >= 65;
    bool isUpperLatin = asciiNum >= 97 && asciiNum <= 122;
    
    return isLowLatin || isUpperLatin;
}

int main() {
    string fileName;
    string line;
    string outString;
    map<string, int> statsOneLetter;
    map<string, int> statsTwoLetter;
    
    ifstream inStream;
    string inputMessageString = "Введите путь до файла: ";

    setlocale(LC_CTYPE, "");

    while (true) {
        cout << inputMessageString;
        cin >> fileName;
        // fileName = "test.txt";
        inStream.open(fileName);
        if (inStream.is_open()) {
            break;
        }
        inputMessageString = "\nФайл не найден\nВведите путь до файла: ";
    }

    while (getline(inStream, line)) {
        int lenOfLine = line.length();

        for (int ind = 0; ind < lenOfLine; ++ind) {
            char letter = line[ind];
            int asciiOfLetter = (int)letter;
            if (isThisLetter(asciiOfLetter)) {
                string letterString{letter};
                statsOneLetter[letterString] += 1;

                int nextInd = ind + 1;
                if (nextInd < lenOfLine) {
                    char nextLetter = line[nextInd];
                    int asciiOfLetter = (int)nextLetter;
                    if (isThisLetter(asciiOfLetter)) {
                        string twoLetters{letter, nextLetter};
                        statsTwoLetter[twoLetters] += 1;
                    }
                }
            }
        }
    }

    printStatsString(statsOneLetter, "Одиночные буквы");
    printStatsString(statsTwoLetter, "Буквенные сочетания");
    
    system("pause");
}