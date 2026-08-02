#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int hours, minutes;
    cout << "Enter time in hours and minutes: ";
    cin >> hours >> minutes;
    // Calculate the angles of the hour and minute hands
    float hour_angle = (hours % 12) * 30 + minutes * 0.5;
    float minute_angle = minutes * 6;
    // Calculate the absolute difference between the angles
    float angle_diff = fabs(hour_angle - minute_angle);
    // The smaller angle is the minimum of the two possible angles
    float smaller_angle = min(angle_diff, 360 - angle_diff);
    cout << "The smaller angle between the hour and minute hands is: " << smaller_angle << " degrees." << endl;
    return 0;
}