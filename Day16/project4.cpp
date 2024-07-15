 /*Modern C++ Design Patterns (Using Move Semantics and Lambdas)

Concept: Explore modern C++ design patterns like move semantics (rvalue references) and lambdas to write efficient and expressive code.
Enhancements:
Move Semantics: Optimize code by understanding how to efficiently move resources (like large objects) to avoid unnecessary copies.
Lambdas: Utilize lambda expressions to create concise and readable anonymous functions, particularly for short-lived logic or event handling.
Example: Create a container class that efficiently stores and moves large objects like images or scientific data. Implement custom iterators or member functions using lambdas to process elements in the container.
These enhanced projects will significantly improve your proficiency in C++11 by:

Emphasizing robust error handling for real-world application reliability.
Leveraging regular expressions for powerful text manipulation.
Optimizing code with move semantics and lambdas.
Applying modern design patterns for well-structured and maintainable code.
*/


#include <iostream>
#include <vector>
#include <memory> // for std::unique_ptr
#include <algorithm> // for std::for_each
#include <functional> // for std::function

// Example class representing a large object (e.g., image)
class Image {
private:
    std::string name;
    // Simulating a large data buffer
    std::unique_ptr<char[]> data;
    size_t size;

public:
    Image(const std::string& n, size_t s) : name(n), size(s) {
        data = std::make_unique<char[]>(size);
        std::cout << "Creating image " << name << " with size " << size << std::endl;
    }

    // Move constructor to efficiently transfer ownership of resources
    Image(Image&& other) noexcept : name(std::move(other.name)), data(std::move(other.data)), size(other.size) {
        other.size = 0;
        std::cout << "Moving image " << name << std::endl;
    }

    // Move assignment operator
    Image& operator=(Image&& other) noexcept {
        if (this != &other) {
            name = std::move(other.name);
            data = std::move(other.data);
            size = other.size;
            other.size = 0;
            std::cout << "Moving image " << name << std::endl;
        }
        return *this;
    }

    ~Image() {
        if (data) {
            std::cout << "Destroying image " << name << std::endl;
        }
    }

    // Example member function for image processing using lambdas
    void process(std::function<void(char*, size_t)> processor) {
        if (data) {
            processor(data.get(), size);
        }
    }
};

// Container class for images
class ImageContainer {
private:
    std::vector<Image> images;

public:
    void addImage(const std::string& name, size_t size) {
        images.emplace_back(name, size);
    }

    // Example function using lambda to process all images in the container
    void processAll(std::function<void(char*, size_t)> processor) {
        std::for_each(images.begin(), images.end(), [&](Image& img) {
            img.process(processor);
        });
    }
};

int main() {
    ImageContainer container;

    // Adding images to the container
    container.addImage("Image1", 1000);
    container.addImage("Image2", 1500);
    container.addImage("Image3", 800);

    // Processing images using a lambda function
    container.processAll([](char* data, size_t size) {
        // Example processing: just print the first byte
        if (size > 0) {
            std::cout << "Processing image data. First byte: " << static_cast<int>(data[0]) << std::endl;
        }
    });

    return 0;
}
