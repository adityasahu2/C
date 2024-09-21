#include<stdio.h>
int main(){
    float kmph, mps, distance, acceleration, time;
    printf("Enter the jet's takeoff speed (in km/h): "); scanf("%f",&kmph);
    printf("Enter the distance over which the jet accelerates (in meters): "); scanf("%f",&distance);
    mps=(kmph*1000)/3600;
    acceleration=(mps*mps)/(2*distance);
    time=mps/acceleration;
    printf("The jet's acceleration is %.2f m/s^2\n",acceleration);
    printf("The time taken to reach takeoff speed is %.2f seconds\n",time);
    return 0;
}