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
    bool isUnique = true;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }
        if(!isUnique){
            break;
        }
    }
    if(isUnique){
        cout<<"All elements in the array are unique."<<endl;
    }
    else{
        cout<<"There are duplicate elements in the array."<<endl;
    }
    return 0;
}