#include<iostream>
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
    int min_index = 0;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[min_index]){
            min_index = i;
        }
    }
    cout<<"Index of the minimum element: "<<min_index<<endl;
    return 0;
}