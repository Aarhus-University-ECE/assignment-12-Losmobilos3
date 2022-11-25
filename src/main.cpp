#include "duration.h"
#include <stdio.h>

// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    duration ClockOne(12);
    printf("Expected: (12): %d \n", ClockOne.getDuration());

    duration ClockTwo(0);
    printf("Expected: (0): %d \n", ClockTwo.getDuration());

    //duration ClockThree;
    //ClockThree.durationWithTime(-3);
    //printf("Expected: (Assert): %d \n", ClockThree.getDuration());

    duration ClockFour;
    printf("Expected: (0): %d \n", ClockFour.getDuration());

    for(int i = 0; i < 3; i++)
        ClockOne.tick();
    printf("Expected: (15): %d \n", ClockOne.getDuration());

    ClockOne.tick(10);
    printf("Expected: (25): %d \n", ClockOne.getDuration());

    ClockOne.setAlarm(26);
    printf("Expected: (1): %d \n", ClockOne.tick());

    ClockTwo.setAlarm(3);
    printf("Expected: (1): %d \n", ClockOne.tick(4));

    //printf("Expected: (Assert): %d \n", ClockTwo.setAlarm(2));

    
}