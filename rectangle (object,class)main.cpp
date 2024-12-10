#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }
    double calculateArea() {
        return length * width;
    }
    void displayArea() {
        cout << "The area of the rectangle is: " << calculateArea() << " square units." << endl;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(6.0, 4.0);
    rect.displayArea();

    return 0;
}
