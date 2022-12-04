#include <iostream>
#include <fstream>

using namespace std;


int main() {

    int totalScore = 0;
    char opp, self;
    ifstream fin("input.txt");
  while(fin >> opp >> self){
    int round = 0;
    if (self =='X'){ // force loss
    round += 0; // for loss

      if(opp == 'A')
        round += 3;
      if(opp == 'B')
        round += 1;
      if(opp == 'C')
        round += 2;
    }
    else if (self =='Y'){ //forrce draw
    round += 3; // for draw
      if(opp == 'A')
        round += 1;
      if(opp == 'B')
        round += 2;
      if(opp == 'C')
        round += 3;
    }
    else if (self =='Z'){ //force win
    round += 6; //for win
      if(opp == 'A')
        round += 2;
      if(opp == 'B')
        round += 3;
      if(opp == 'C')
        round += 1;
    }
  totalScore += round;  
  
  }
  
  cout << totalScore << "is the total score " << endl;
    
  return 0;
}


