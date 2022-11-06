#include <iostream>
#include<math.h>

using namespace std;
double distance(double lat1,double lon1,double lat2,double lon2)
{
    double p = 0.017453292519943295; // Math.PI / 180
    double a = 0.5 - cos((lat2 - lat1) * p) / 2 +
            cos(lat1 * p) * cos(lat2 * p) *
                (1 - cos((lon2 - lon1) * p)) / 2;

    return 12742 * sin(sqrt(a)); // 2 * R; R = 6371 km
}

int main()
{
    cout<<distance(21.1458,79.0882, 21.2514,81.6296);
    return 0;
}