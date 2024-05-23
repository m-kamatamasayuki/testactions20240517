#include <iostream>
#include <vector>
#include <string>

class Person {
public:
    std::string name;
    std::string address;

    Person(const std::string& name, const std::string& address) : name(name), address(address) {}
};

class AddressBook {
public:
    std::vector<Person> people;

    void addPerson(const Person& person) {
        people.push_back(person);
    }

    void printAddressBook() {
        for (const auto& person : people) {
            std::cout << "Name: " << person.name << ", Address: " << person.address << std::endl;
        }
    }
};

int main() {
    AddressBook addressBook;
    addressBook.addPerson(Person("山田 太郎", "東京都新宿区"));
    addressBook.addPerson(Person("佐藤 次郎", "神奈川県横浜市"));
	addressBook.addPerson(Person("山田 花子", "神奈川県横浜市"));
    addressBook.addPerson(Person("佐藤 花子", "神奈川県川崎市"));
	addressBook.printAddressBook();

    return 0;
}
