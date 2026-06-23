#ifndef CORNERGROCER_H
#define CORNERGROCER_H

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class CornerGrocer {
private:
    map<string, int> itemFrequency;

public:
    CornerGrocer();

    void LoadFile(string filename);
    void CreateBackupFile();
    void SearchItem(string item);
    void PrintAllItems();
    void PrintHistogram();
};

#endif