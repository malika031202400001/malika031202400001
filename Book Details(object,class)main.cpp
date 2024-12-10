#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    void setTitle(string t) {
        title = t;
    }

    void setAuthor(string a) {
        author = a;
    }

    void setPrice(double p) {
        price = p;
    }

    void displayDetails() {
        cout << "Book Details:" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book book1, book2;

    book1.setTitle("The Great Gatsby");
    book1.setAuthor("F. Scott Fitzgerald");
    book1.setPrice(10.99);

    book2.setTitle("1984");
    book2.setAuthor("George Orwell");
    book2.setPrice(8.99);

    cout << "Book 1:" << endl;
    book1.displayDetails();

    cout << "\nBook 2:" << endl;
    book2.displayDetails();

    return 0;
}

