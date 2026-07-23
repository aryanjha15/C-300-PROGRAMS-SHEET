#include<iostream>
using namespace std;
int main(){
    int coordinateX, coordinateY;
    cout<<"Enter the X coordinate: "; 
    cin>>coordinateX;
    cout<<"Enter the Y coordinate: ";
    cin>>coordinateY;   
    if(coordinateX>0 && coordinateY>0){
        cout<<"The point lies in the First Quadrant";
    }
    else if(coordinateX<0 && coordinateY>0){
        cout<<"The point lies in the Second Quadrant";
    }
    else if(coordinateX<0 && coordinateY<0){
        cout<<"The point lies in the Third Quadrant";
    }
    else if(coordinateX>0 && coordinateY<0){
        cout<<"The point lies in the Fourth Quadrant";
    }
    else if(coordinateX==0 && coordinateY==0){
        cout<<"The point lies at the Origin";
    }
    else if(coordinateX==0 && coordinateY!=0){
        cout<<"The point lies on the Y axis";
    }
    else if(coordinateX!=0 && coordinateY==0){
        cout<<"The point lies on the X axis";
    }

    return 0;   
}