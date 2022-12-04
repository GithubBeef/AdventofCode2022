#include <iostream>
#include <fstream>

using namespace std;

  char findChar (string x, string y){ //function to determine duplicate character 
  for (int i = 0; i < x.length(); i++){
    for (int j = 0; j < y.length(); j++){
      if (x[i] == y[j]){
        return y[j];
        }}}}

int main() {
  ifstream fin("input.txt");
  
  int priorityTotal = 0; // accumulator
  string rucksack; // rucksack string
  while(fin >> rucksack ){ // set rucksack to current line
  string front = rucksack.substr(0, rucksack.length()/2); // split rucksack string in half
  string back = rucksack.substr(rucksack.length()/2);
  char item = findChar(front, back); // call function which determines the duplicate char

  if (item >= 'A' && item <= 'Z' ){
      cout << item << " is Uppercase and worth:" << (item-38) << endl;
    priorityTotal += (item-38);
    }
  else if (item >= 'a' && item <= 'z'){ 
  cout << item << " is lowercase and worth:  " << (item-96) << endl;
    priorityTotal += (item-96);
    }
  cout << "testing found char:" << item << endl;
  }
  cout << "final total of priority items: " << priorityTotal << endl;
}