#include <iostream>
#include <string>

using namespace std;

int main()
{
    // int first, second, third, fourth;
    // cin >> first >> second >> third >> fourth;
    // cout << first << second << third << fourth;
	
    int accum = 0;
	
    string first, second, third, fourth;
    while(getline(cin, first, '-')){
		getline(cin, second, ',');
		getline(cin, third, '-');
		getline(cin, fourth);
        
		int firstInt = stoi(first);
		int secondInt = stoi(second);
		int thirdInt = stoi(third);
		int fourthInt = stoi(fourth);

    
		//if((secondInt - firstInt) >= (fourthInt - thirdInt)){ //first section is larger
			if (firstInt > fourthInt || secondInt < thirdInt)
				accum += 0;
			else
				accum += 1;
		}
		
		//else if((secondInt - firstInt) <= (fourthInt - thirdInt)){ //first section is larger
		//	if (secondInt < thirdInt || fourthInt < firstInt)
		//		accum += 0;
		//	else
		//		accum += 1;
		//}
		//	
		//}
	cout << accum << endl;
   return 0;
}