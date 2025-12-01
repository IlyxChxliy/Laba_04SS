#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void readFromFile (vector<string>& lines, const string& filename = "input.txt")
{
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

void printToScreen(const vector<string> &lines) {
    if (lines.empty()) {
        cout << "Вектор пуст. Нечего выводить." << endl;
        return;
    }

    cout << "Вывод строк на экран" << endl;
    for (size_t i = 0; i < lines.size(); i++) {
        cout << "[" << i + 1 << "] " << lines[i] << endl;
    }
}

// Функция №3: Запись строк в файл
void writeToFile(const vector<string> &lines, const string &filename = "output.txt") {
    ofstream outputFile(filename);

    if (!outputFile.is_open()) {
        cout << "Ошибка: не удалось создать файл " << filename << endl;
        return;
    }

    for (const auto &line : lines) {
        outputFile << line << endl;
    }

    outputFile.close();
    cout << "Записано " << lines.size() << " строк в файл " << filename << endl;
}

int main()
{
    vector<string> lines;
    readFromFile(lines);
    printToScreen(lines);
    writeToFile(lines);
    return 0;
}
