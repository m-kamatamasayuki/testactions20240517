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
    addressBook.addPerson(Person("yamada tarou ", "tokyo-to sinjyuku-ku"));
    addressBook.addPerson(Person("satou jirou", "kanagawa-ken yokohama-si"));
	addressBook.addPerson(Person("yamada hanako", "tokyo-to sinjyuku-ku"));
    addressBook.addPerson(Person("satou hanako", "kanagawa-ken sinjukyu-ku"));
	addressBook.printAddressBook();

    return 0;
}
