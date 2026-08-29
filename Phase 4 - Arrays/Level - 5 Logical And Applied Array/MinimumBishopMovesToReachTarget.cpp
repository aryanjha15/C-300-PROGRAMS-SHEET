#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    cout<<"Enter the coordinates of the first position (x1, y1): ";
    cin>>x1>>y1;
    cout<<"Enter the coordinates of the target position (x2, y2): ";
    cin>>x2>>y2;

    // Check if the bishop can reach the target position
    if((x1 + y1) % 2 != (x2 + y2) % 2){
        cout<<"The bishop cannot reach the target position."<<endl;
        return 0;
    }

    // Calculate the minimum number of moves
    int moves = 0;
    if(x1 == x2 && y1 == y2){
        moves = 0; // Already at the target position
    } else if(abs(x1 - x2) == abs(y1 - y2)){
        moves = 1; // Can reach in one move
    } else {
        moves = 2; // Requires two moves
    }

    cout<<"Minimum number of moves required: "<<moves<<endl;
    return 0;
}