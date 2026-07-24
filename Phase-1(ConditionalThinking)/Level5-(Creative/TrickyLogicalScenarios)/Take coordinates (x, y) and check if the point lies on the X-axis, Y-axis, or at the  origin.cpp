#include<iostream>
using namespace std;
int main(){
    int coordinateX, coordinateY;
    cout << "Enter the X coordinate: ";
    cin >> coordinateX;
    cout << "Enter the Y coordinate: ";
    cin >> coordinateY;
    if(coordinateX == 0 && coordinateY == 0){
        cout << "The point is at the origin." << endl;
    } else if(coordinateX == 0){
        cout << "The point lies on the Y-axis." << endl;
    } else if(coordinateY == 0){
        cout << "The point lies on the X-axis." << endl;
    } else {
        cout << "The point does not lie on either axis." << endl;
    }
    return 0;
}