#include <iostream>
using namespace std;

class Rectangle {
private:
    double get_width;
    double get_length;

public:
    // Set the width
    void set_width(double width) {
        get_width = width;
    }

    // Set the length
    void set_length(double length) {
        get_length = length;
    }

    // Calculate the perimeter
    double get_perimeter() {
        return 2 * (get_width + get_length);
    }
};

int main() {
    Rectangle rect;

    // Set width and length
    rect.set_width(5);
    rect.set_length(10);

    // Display the perimeter
    cout << "Perimeter: " << rect.get_perimeter() << endl;

    return 0;
}