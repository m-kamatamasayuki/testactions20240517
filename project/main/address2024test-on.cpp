#include <iostream>
#include <fstream>
#include <string>
#include <map>

int main() {
    std::map<std::string, std::string> addressBook;
    std::ifstream file("*.txt"); // ここにはあなたのファイル名を入力してください

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            size_t pos = line.find(",");
            std::string name = line.substr(0, pos);
            std::string address = line.substr(pos + 1);
            addressBook[name] = address;
        }
        file.close();
    } else {
        std::cout << "Unable to open file";
    }

    // 住所録の表示
    for (const auto &entry : addressBook) {
        std::cout << "Name: " << entry.first << ", Address: " << entry.second << std::endl;
    }

    return 0;
}
