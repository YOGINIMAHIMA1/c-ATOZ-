/*You have a TemperatureSensor class that measures temperature in Celsius. You want a separate DisplayTemperature function to print the temperature in Fahrenheit. However, the conversion formula requires accessing the private celsius member.

Create a TemperatureSensor class with a private celsius member and a public constructor.
Implement a friend function DisplayTemperature that takes a TemperatureSensor object and prints the temperature in Fahrenheit (conversion formula provided).
Write a main function to demonstrate how to use the classes.*/


#include <iostream>
using namespace std;

class TemperatureSensor {
private:
    int celsius;
public:
    // Constructor
    TemperatureSensor(int temp) : celsius(temp) {}
    
    // Friend function declaration
    friend void DisplayTemperature(const TemperatureSensor &sensor);
};

// Friend function definition
void DisplayTemperature(const TemperatureSensor &sensor) {
    // Conversion formula: Fahrenheit = (Celsius * 9/5) + 32
    float fahrenheit = (sensor.celsius * 9.0 / 5.0) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
}

int main() {
    // Create a TemperatureSensor object
    TemperatureSensor sensor(25); // Example temperature in Celsius

    // Call the friend function to display the temperature in Fahrenheit
    DisplayTemperature(sensor);

    return 0;
}
