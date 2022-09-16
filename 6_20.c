#include <stdio.h>

const double MILE_IN_LAP = 0.25;
double LapsToMiles(double laps){
    double answer = MILE_IN_LAP * laps;
    return answer;
}

int main() {
    double numLap;
    scanf("%lf" ,&numLap);
    printf("%0.2lf\n", LapsToMiles(numLap));
    return 0;
}
