#include <iostream>
#include <iomanip> // For std::setprecision

// Function to get input from the user
void getInput(double &currentPrice, double &priceLastYear, double &priceTwoYearsAgo) {
    std::cout << "Enter the current price of the item: ";
    std::cin >> currentPrice;

    std::cout << "Enter the price of the item one year ago: ";
    std::cin >> priceLastYear;

    std::cout << "Enter the price of the item two years ago: ";
    std::cin >> priceTwoYearsAgo;
}

// Function to calculate the inflation rates
void calculateInflation(double currentPrice, double priceLastYear, double priceTwoYearsAgo, double &inflationRateLastYear, double &inflationRateTwoYearsAgo) {
    inflationRateLastYear = (currentPrice - priceLastYear) / priceLastYear * 100; // Convert to percentage
    inflationRateTwoYearsAgo = (priceLastYear - priceTwoYearsAgo) / priceTwoYearsAgo * 100; // Convert to percentage
}

// Function to output the results
void outputResults(double inflationRateLastYear, double inflationRateTwoYearsAgo) {
    std::cout << std::fixed << std::setprecision(2); // Set decimal precision

    std::cout << "Inflation Rate from Two Years Ago to Last Year: " << inflationRateTwoYearsAgo << "%" << std::endl;
    std::cout << "Inflation Rate from Last Year to Current Year: " << inflationRateLastYear << "%" << std::endl;

    // Determine the trend
    if (inflationRateLastYear > inflationRateTwoYearsAgo) {
        std::cout << "Inflation trend: Increasing" << std::endl;
    } else if (inflationRateLastYear < inflationRateTwoYearsAgo) {
        std::cout << "Inflation trend: Decreasing" << std::endl;
    } else {
        std::cout << "Inflation trend: Stable" << std::endl;
    }
}

int main() {
    double currentPrice, priceLastYear, priceTwoYearsAgo;
    double inflationRateLastYear, inflationRateTwoYearsAgo;

    // Get input from the user
    getInput(currentPrice, priceLastYear, priceTwoYearsAgo);

    // Calculate inflation rates
    calculateInflation(currentPrice, priceLastYear, priceTwoYearsAgo, inflationRateLastYear, inflationRateTwoYearsAgo);

    // Output the results
    outputResults(inflationRateLastYear, inflationRateTwoYearsAgo);

    return 0;
}
