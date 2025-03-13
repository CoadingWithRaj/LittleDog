#include "List.h"

using namespace std; 
// Destructor to clean up the list.
List::~List() 
{
    while (head) {
        Cell* temp = head;
        head = head->next;
        delete temp;  // Free dynamically allocated memory.
    }
}

// Insert a new line into the list, maintaining sorted order.
void List::insert(const string& line) 
{
    Cell* prior = nullptr;
    Cell* scan = head;

    find(line, prior, scan);  // Find the right position for insertion.

    // Create a new Cell and insert it at the correct position.
    Cell* newCell = new Cell(line, scan);

    if (prior == nullptr) 
    {
        head = newCell;  // Insert at the head.
    }
    else 
    {
        prior->next = newCell;  // Insert after 'prior'.
    }
}

// Find the correct position to insert the new line.
void List::find(const string& line, Cell*& prior, Cell*& scan) 
{
    prior = nullptr;
    scan = head;
    while (scan != nullptr && scan->data < line) 
    {
        prior = scan;
        scan = scan->next;
    }
}

// Print the list to the given output stream.
void List::print(ostream& out) const 
{
    Cell* scan = head;
    while (scan != nullptr) 
    {
        out << scan->data << endl;  // Print each line.
        scan = scan->next;
    }
}
