/*Create a class hierarchy (e.g., animals with different sounds) and manage object lifetimes and relationships using smart pointers. 
 Include error handling to gracefully handle situations where resources might not be available. */

 #include <iostream>
#include <memory> // for smart pointers
#include <vector>

// Base class Animal
class Animal {
public:
    virtual ~Animal() = default; // Virtual destructor for polymorphic behavior

    virtual void makeSound() const = 0; // Pure virtual function for making sound
};

// Derived classes for specific animals

class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Dog: Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "Cat: Meow!" << std::endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() const override {
        std::cout << "Cow: Moo!" << std::endl;
    }
};

// Function to create and manage animal objects using smart pointers
void createAndManageAnimals() {
    // Using smart pointers for managing object lifetimes
    std::shared_ptr<Animal> dog = std::make_shared<Dog>();
    std::shared_ptr<Animal> cat = std::make_shared<Cat>();
    std::shared_ptr<Animal> cow = std::make_shared<Cow>();

    // Array of smart pointers
    std::vector<std::shared_ptr<Animal>> animals = {dog, cat, cow};

    // Accessing and using objects
    for (const auto& animal : animals) {
        animal->makeSound();
    }
}

int main() {
    try {
        createAndManageAnimals();
    } catch (const std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
        // Handle gracefully, perhaps retry or log the error
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        // Handle other exceptions
    }

    return 0;
}
