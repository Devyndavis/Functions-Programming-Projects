#include <iostream>
#include <cmath> // For sqrt() function

// Function to calculate distance between two points (x1, y1) and (x2, y2)
double calcDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate the radius of a circle given the center and a point on the circumference
double calcRadius(double centerX, double centerY, double pointX, double pointY) {
    // Call calcDistance to get the radius
    return calcDistance(centerX, centerY, pointX, pointY);
}

// Function to calculate the circumference of a circle
double calcCircumference(double radius) {
    const double PI = 3.1416;
    return 2 * PI * radius;
}

// Function to calculate the area of a circle
double calcArea(double radius) {
    const double PI = 3.1416;
    return PI * pow(radius, 2);
}

int main() {
    // Variables to store the coordinates of the center and a point on the circumference
    double centerX, centerY, pointX, pointY;

    // Input the coordinates of the center of the circle
    std::cout << "Enter the coordinates of the center of the circle (x y): ";
    std::cin >> centerX >> centerY;

    // Input the coordinates of a point on the circumference of the circle
    std::cout << "Enter the coordinates of a point on the circumference of the circle (x y): ";
    std::cin >> pointX >> pointY;

    // Calculate the radius
    double radius = calcRadius(centerX, centerY, pointX, pointY);

    // Calculate the circumference and area using the radius
    double circumference = calcCircumference(radius);
    double area = calcArea(radius);

    // Output the results
    std::cout << "Radius of the circle: " << radius << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;
    std::cout << "Area of the circle: " << area << std::endl;

    return 0;
}