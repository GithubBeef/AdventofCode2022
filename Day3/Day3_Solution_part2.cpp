#include <iostream>
#include <fstream>

using namespace std;

  char findChar (string x, string y, string z){   //function to determine duplicate character 
  for (char i : x){
    for (char j : y){
      if (i == j){
        for(char k : z){
          if (i == k)
            return k;
                  }
                }
              }
            }
        }

int main() {
  ifstream fin("input.txt");
  
  int priorityTotal = 0; // accumulator
  string rucksack0; // rucksack string
  string rucksack1; // rucksack string
  string rucksack2; // rucksack string
  while(fin >> rucksack0 >> rucksack1 >> rucksack2 ){ // set rucksack to current line

  char item = findChar(rucksack0, rucksack1, rucksack2); // call function which determines the duplicate char

  if (item >= 'A' && item <= 'Z' ){
      cout << item << " is Uppercase and worth:" << (item-'A'+27) << endl; //27 is start of capital letter values
    priorityTotal += (item-'A'+27);
    }
  else if (item >= 'a' && item <= 'z'){ 
  cout << item << " is lowercase and worth:  " << (item-'a'+1) << endl;
    priorityTotal += (item-'a'+1);
    }
  
  cout << "testing found char:" << item << endl;
  }
  cout << "final total of priority items: " << priorityTotal << endl;
}