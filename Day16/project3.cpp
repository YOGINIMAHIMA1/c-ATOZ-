/*File I/O with Regular Expressions (Enhanced with Error Handling and Performance)
Concept: Employ C++11 file I/O streams (ifstream, ofstream) to read from and write to files.
Enhancements:
Error Handling: Implement robust error handling to gracefully deal with file opening failures, I/O errors, or invalid data formats. Consider using exceptions or custom error codes for better diagnostics.
Regular Expressions: Utilize the <regex> library to search for patterns within text files, allowing for more complex data extraction or manipulation.
Example: Create a program that reads a log file, 
searches for specific error messages using regular expressions,
 and writes the matching lines to a new file, providing 
 informative error messages if issues arise during file access
  or processing. */

#include <iostream>
#include <fstream>
#include <regex>
#include <stdexcept>

// Function to read log file, search for errors using regex, and write to output file
void processLogFile(const std::string& inputFile, const std::string& outputFile) {
    std::ifstream inFile(inputFile);
    if (!inFile) {
        throw std::runtime_error("Error opening input file: " + inputFile);
    }

    std::ofstream outFile(outputFile);
    if (!outFile) {
        throw std::runtime_error("Error opening output file: " + outputFile);
    }

    // Regular expression to match error messages (example pattern)
    std::regex errorRegex(R"(error|exception)", std::regex_constants::icase); // Match "error" or "exception", case insensitive

    std::string line;
    while (std::getline(inFile, line)) {
        if (std::regex_search(line, errorRegex)) {
            outFile << line << std::endl; // Write matching line to output file
        }
    }

    // Close files
    inFile.close();
    outFile.close();
}

int main() {
    std::string inputFile = "input.log";
    std::string outputFile = "errors.log";

    try {
        processLogFile(inputFile, outputFile);
        std::cout << "Error messages extracted from " << inputFile << " and saved to " << outputFile << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1; // Exit with error code
    }

    return 0;
}
