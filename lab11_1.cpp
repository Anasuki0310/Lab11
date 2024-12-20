#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(){
    srand(time(0));
    string grades[9] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    
    cout << "Press Enter 3 times to reveal your future.";
    
    for(int i = 0;i < 3; ++i){
        cin.ignore();
        
    }
    
    string grade = grades[rand() % 9];
    
    cout << "You will get " << grade << " in this 261102." << endl;
    
    return 0;
}
    
