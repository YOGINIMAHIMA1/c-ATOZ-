/*Simulate rolling dice, flipping coins, or generating random temperatures within a range. 
Users can choose the type of distribution and potentially 
customize paramete*/


#include <iostream>
#include <random> // for random number generation

// Function to simulate rolling a dice with customizable sides
int rollDice(int sides) {
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 eng(rd()); // seed the generator
    std::uniform_int_distribution<> distr(1, sides); // define the range

    return distr(eng); // generate the random number
}

// Function to simulate flipping a coin (0 for tails, 1 for heads)
int flipCoin() {
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 eng(rd()); // seed the generator
    std::uniform_int_distribution<> distr(0, 1); // define the range (0 or 1)

    return distr(eng); // generate the random number
}

// Function to generate a random temperature within a specified range
double generateRandomTemperature(double minTemp, double maxTemp) {
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 eng(rd()); // seed the generator
    std::uniform_real_distribution<> distr(minTemp, maxTemp); // define the range

    return distr(eng); // generate the random number
}

int main() {
    int choice;
    std::cout << "Choose an option:" << std::endl;
    std::cout << "1. Roll a dice" << std::endl;
    std::cout << "2. Flip a coin" << std::endl;
    std::cout << "3. Generate a random temperature" << std::endl;
    std::cin >> choice;

    switch (choice) {
        case 1: {
            int sides;
            std::cout << "Enter the number of sides for the dice: ";
            std::cin >> sides;
            int result = rollDice(sides);
            std::cout << "Result of rolling a " << sides << "-sided dice: " << result << std::endl;
            break;
        }
        case 2: {
            int result = flipCoin();
            std::cout << "Result of flipping a coin: " << (result == 0 ? "Tails" : "Heads") << std::endl;
            break;
        }
        case 3: {
            double minTemp, maxTemp;
            std::cout << "Enter the minimum and maximum temperatures: ";
            std::cin >> minTemp >> maxTemp;
            double temperature = generateRandomTemperature(minTemp, maxTemp);
            std::cout << "Random temperature generated: " << temperature << " degrees Celsius" << std::endl;
            break;
        }
        default:
            std::cout << "Invalid choice. Please choose from 1 to 3." << std::endl;
            break;
    }

    return 0;
}
