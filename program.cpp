#include <iostream>
#include <vector>
#include <string>

using namespace std;

void readFromFile(vector<string>& lines, const string& filename = "input.txt") {
    ifstream inputFile(filename);

    if (!inputFile.is_open()) {
        cout << "Ошибка: не удалось открыть файл " << filename << endl;
        return;
    }

    string line;
    while (getline(inputFile, line)) {
        lines.push_back(line);
    }

    inputFile.close();
    cout << "Прочитано " << lines.size() << " строк из файла." << endl;
}

void printToScreen(const vector<string>& lines) {
    // Функция 2: вывод на экран
}

void writeToFile(const vector<string>& lines) {
    // Функция 3: запись в файл
}

int main() {
    vector<string> lines;
    readFromFile(lines);
    printToScreen(lines);
    writeToFile(lines);
    return 0;
}