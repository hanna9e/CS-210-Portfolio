#include "CornerGrocer.h"

//constructor
CornerGrocer::CornerGrocer() {
}

//THis reads the input file and counts each item
void CornerGrocer::LoadFile(string filename) {
    ifstream inputFile;
    string item;

    inputFile.open(filename);

    if (!inputFile.is_open()) {
        cout << "Error opening file." << endl;
        return;
    }

    while (inputFile >> item) {
        itemFrequency[item]++;
    }

    inputFile.close();

    // create backup file automatically 
    CreateBackupFile();
}

//This generates the frequency.dat file
void CornerGrocer::CreateBackupFile() {
    ofstream outFile("frequency.dat");

    for (auto pair : itemFrequency) {
        outFile << pair.first << " " << pair.second << endl;
    }

    outFile.close();
}

// searching for one item
void CornerGrocer::SearchItem(string item) {

    if (itemFrequency.count(item) > 0) {
        cout << item << " was purchased "
             << itemFrequency[item]
             << " time(s)." << endl;
    }
    else {
        cout << item << " was not found." << endl;
    }
}

//print every item and its frequency
void CornerGrocer::PrintAllItems() {

    for (auto pair : itemFrequency) {
        cout << pair.first << " "
             << pair.second << endl;
    }
}

//print histogram
void CornerGrocer::PrintHistogram() {

    for (auto pair : itemFrequency) {

        cout << pair.first << " ";

        for (int i = 0; i < pair.second; i++) {
            cout << "*";
        }

        cout << endl;
    }
}