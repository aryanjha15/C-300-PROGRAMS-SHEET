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
    int positive = 0, negative = 0, zero = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            positive++;
        }
        else if(arr[i] < 0){
            negative++;
        }
        else{
            zero++;
        }
    }
    cout<<"Number of positive elements: "<<positive<<endl;
    cout<<"Number of negative elements: "<<negative<<endl;
    cout<<"Number of zero elements: "<<zero<<endl;
    return 0;
}