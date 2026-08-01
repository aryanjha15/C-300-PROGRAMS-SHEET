#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" integers: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0; i<n; i++){
        int root = sqrt(arr[i]);
        if(root * root == arr[i]){
            count++;
        }
    }
    cout<<"Number of perfect squares: "<<count<<endl;
}

