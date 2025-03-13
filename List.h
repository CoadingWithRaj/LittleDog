#include <iostream>
#include <fstream>
#include <string>

using namespace std; 

class List 
{
private:
    class Cell 
    {
    public:
        string data;
        Cell* next;

        // Constructor for Cell class
        Cell(const string& line, Cell* nextCell = nullptr)
            : data(line), next(nextCell) {
        }
        // Pass string by 'const reference' to avoid unnecessary copying.
    };

    Cell* head;  // Pointer to the head of the list.

public:
    List() : head(nullptr) {}  // Use initializer list for consistency.
    ~List();  // Ensure proper cleanup in the destructor.

    // Function to insert data into the list.
    void insert(const string& line);  // Pass by 'const reference' for efficiency.

    // Function to print the list to an output stream (console or file).
    void print(ostream& out) const;  // Uses 'ostream&' to support various outputs.

private:
    // Find the position where the new cell should go.
    void find(const string& line, Cell*& prior, Cell*& scan);
    // Ensure parameters are passed by reference to modify them in-place.
};
