// CS 210 Project 3
// Hanna Alemu
// 6/21/2026

#include <iostream>
#include <limits>
#include "CornerGrocer.h"

using namespace std;

// Displays the program menu
void DisplayMenu() {
    cout << "\n=====*** Corner Grocer Menu ***=====" << endl;
    cout << "1. Search for an item" << endl;
    cout << "2. Display all item frequencies" << endl;
    cout << "3. Display histogram" << endl;
    cout << "4. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    CornerGrocer grocery;
    grocery.LoadFile("CS210_Project_Three_Input_File.txt");

    int choice = 0;

    while (choice != 4) {
        DisplayMenu();
        cin >> choice;

        // First validate menu input
        while (cin.fail() || choice < 1 || choice > 4) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "invalid choice. Please enter a number between 1 and 4: ";
            cin >> choice;
        }

        switch (choice) {
        case 1: {
            string item;
            cout << "Please enter item to search for: ";
            cin >> item;
            grocery.SearchItem(item);
            break;
        }

        case 2:
            grocery.PrintAllItems();
            break;

        case 3:
            grocery.PrintHistogram();
            break;

        case 4:
            cout << "Thank you for using the Corner Grocer Tracker!!" << endl;
            break;
        }
    }

    return 0;
}