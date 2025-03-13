#include <iostream>
#include <fstream>
#include <string>
#include "List.h"

using namespace std;  
// Function to read and display the banner message from banner.txt
void banner() 
{
    ifstream bannerFile("banner.txt");  // Open banner.txt
    if (!bannerFile) 
    {
        cerr << "Error: Could not open banner.txt!" << endl;
        exit(1);  // Exit if the file cannot be opened
    }

    string line;
    while (getline(bannerFile, line)) 
    {
        cout << line << endl;  // Print each line to the console
    }
    bannerFile.close();  // Close the file after reading
}

// Function to print the goodbye message
void bye() 
{
    cout << "Thank you for using the Sorting Program!" << endl;
    cout << "Goodbye!" << endl;
}

// Function to handle file opening failures
void fatal()
{
    cerr << "Error: Could not open the input file!" << endl;
    exit(1);
}

int main() 
{
    string inputFile = "p3Meow.txt";  // Hardcoded input file name

    ifstream infile(inputFile);  // Open the input file
    if (!infile)
    {
        fatal();  // Handle input file opening failure
    }

    // Open the output file for writing the sorted lines
    ofstream outfile("consoleOutput.txt");
    if (!outfile)
    {
        cerr << "Error: Could not open the output file!" << endl;
        return 1;  // Return error code if output file cannot be opened
    }

    banner();  // Display the banner message

    List list;  // Create a List object for storing sorted lines

    string line;
    while (getline(infile, line))
    {
        list.insert(line);  // Insert each line into the sorted linked list
    }

    infile.close();  // Close the input file

    // Print the sorted list to both the console and the output file
    list.print(outfile);  // Print sorted content to the output file
    outfile.close();  // Close the output file

    bye();  // Display the goodbye message

    return 0;  // Return success code
}
