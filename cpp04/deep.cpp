#include <iostream>
#include <cstring>

// class MyClass {
// private:
//     int* data;
//     int size;

// public:
//     MyClass(int sz){
//         size = sz;
//         data = new int[size];
//     }

//     ~MyClass() {
//         delete[] data;
//     }

//     MyClass(const MyClass& other){
//         size = other.size;
//         data = new int[size];
//         for (int i = 0; i < size; ++i) {
//             data[i] = other.data[i];
//         }
//     }

//     MyClass operator=(const MyClass& other) {
//         if (this != &other){
//             delete[] data;
//             size = other.size;
//             data = new int[size];
//             for (int i = 0; i < size; ++i) {
//                 data[i] = other.data[i];
//             }
//         }
//         return *this;
//     }

//     void setData(int index, int value) {
//         data[index] = value;
//     }

//     void displayData() {
//         for (int i = 0; i < size; ++i) {
//             std::cout << data[i] << " ";
//         }
//         std::cout << std::endl;
//     }
// };

// int main() {
//     int arr[5] = {4, 44, 51, 78, 1};
//     MyClass obj1(5);

//     for (int i = 0; i < 5; i++) {
//         obj1.setData(i, arr[i]);
//     }

//     std::cout << "Original Object: ";
//     obj1.displayData();

//     MyClass obj2 = obj1;

//     std::cout << "Copied Object: ";
//     obj2.displayData();

//     obj1.setData(1, 99);

//     std::cout << "Original Object after modification: ";
//     obj1.displayData();
//     std::cout << "Copied Object after modification: ";
//     obj2.displayData();

//     return 0;
// }

#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    // Default constructor
    Person(const std::string& n, int a){
        name = n;
        age = a;
    }

    // Copy constructor
    Person(const Person& other){
        name = other.name;
        age = other.age;
    }

    Person& operator=(const Person& other) {
            name = other.name;
            age = other.age;
        return *this;
    }
};

int main() {
    // Shallow Copy Example
    Person person1("Alice", 25);
    Person person2 = person1;  // Shallow copy
    
    std::cout << "Person 1: " << person1.name << ", " << person1.age << std::endl;
    std::cout << "Person 2: " << person2.name << ", " << person2.age << std::endl;
    // Modifying person1 will also affect person2
    person1.name = "Bob";

    std::cout << "Shallow Copy Example:" << std::endl;
    std::cout << "Person 1: " << person1.name << ", " << person1.age << std::endl;
    std::cout << "Person 2: " << person2.name << ", " << person2.age << std::endl;
    std::cout << "\n" << std::endl;

    // Deep Copy Example
    Person* person3 = new Person("Charlie", 30);
    Person* person4 = new Person(*person3);  // Deep copy


    std::cout << "Person 3: " << person3->name << ", " << person3->age << std::endl;
    std::cout << "Person 4: " << person4->name << ", " << person4->age << std::endl;
    // Modifying person3 will not affect person4
    person3->name = "David";

    std::cout << "Deep Copy Example:" << std::endl;
    std::cout << "Person 3: " << person3->name << ", " << person3->age << std::endl;
    std::cout << "Person 4: " << person4->name << ", " << person4->age << std::endl;

    // Clean up the dynamically allocated memory
    delete person3;
    delete person4;
}
