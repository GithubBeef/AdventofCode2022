#include <iostream>
using namespace std;

int totalScore = 0;
int main() {
  char opp, self;
  while(cin >> opp >> self){
    int round = 0;
    if (self =='X'){
      round += 1;
      if(opp == 'A')
        round += 3;
      if(opp == 'C')
       round += 6;
    }
    else if (self =='Y'){
      round += 2;
      if(opp == 'B')
        round += 3;
      if(opp == 'A')
       round += 6;
    }
    else if (self =='Z'){
      round += 3;
      if(opp == 'C')
        round += 3;
      if(opp == 'B')
       round += 6;
    }
  totalScore += round;  
  
  }
  
  cout << totalScore << "is the total score " << endl;
    
  return 0;
}
