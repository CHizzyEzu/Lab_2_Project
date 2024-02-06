// Calculating Hours to Destination

#include <iostream>
using namespace std;

int main()
{
    double mph, hours, distance;
    
    // Avg Rate of Speed of Vehicle
    cout << "How fast are you going on Average (mph)? ";
    cin >> mph;

    //Distance from destination
    cout << "How far are you from your destination (mi)? ";
    cin >> distance;

    // Calculate Avg Time to destination
    hours = distance / mph;

    // Display avg time 
    cout << "Your average speed indicates you will arrive at your destination in this many hours " << hours << endl;
    return 0;
}
