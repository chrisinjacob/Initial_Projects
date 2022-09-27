#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Record.h"
using namespace std;

// function prototypes 
bool readCSVtovector(string, vector<Record>&);
void print_n(vector<Record>&, int);
void print_all(vector<Record>&);


// main function
int main(){

  // name of file for data 
  string filename = "learning.csv";

  // create vector of records
  vector<Record> eventRecords;

  // call function to read in csv data 
  if (readCSVtovector(filename, eventRecords)){
    cout << "Data read in successfully\n";

    // print first few records 
    print_n(eventRecords, 5);

    // print all records
    print_all(eventRecords);

  }
  else{
    cout << "Couldn't read in data\n";
  }

	return 0;
}


//read in csv records to vector of Records
bool readCSVtovector(string fn, vector<Record>& records){

  bool success = false;

  ifstream infile(fn, ios::in); // open file 
  string line; // string to hold each line of data 

  if (infile){ // if file opened successfully
    cout << "\nFile opened\n";
    getline(infile, line); // read in header row
    
    
    string district, discat, category, total, numblend, perblend, numremote, perremote;

    // use for loop to go through remaining rows 
    while (getline(infile, line)){
      istringstream row{line};
      getline(row, district, ',');
      getline(row, discat, ',');
      getline(row, category, ',');
      getline(row, total, ',');
      getline(row, numblend, ',');
      getline(row, perblend, ',');
      getline(row, numremote, ',');
      getline(row, perremote);

      // create new Record, add to vector 
      Record newrec{stoi(district), discat, category, stol(total), stol(numblend), stod(perblend), stol(numremote), stod(perremote)};
      records.push_back(newrec);
    }

    success = true; // true means we were able to read file 
  }
  
  return success;
}

void print_n(vector<Record>& records, int n){
  if (n > records.size()){
    n = records.size();
    cout << "Only " << n << " records will be printed.\n";
  }
  else{
    cout << n << " records will be printed.\n";
  }

  for (int i = 0; i < n; i++){
    records[i].print();
  }
}

void print_all(vector<Record>& records){
  cout << "\nPrinting all " << records.size() << " records.\n";
  for (Record rec : records){
    rec.print();
  }
}
