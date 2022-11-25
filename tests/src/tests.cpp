#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "duration.h"

TEST_CASE("Constructor")
{
    duration ClockOne(12);
    REQUIRE(ClockOne.getDuration() == 12);

    duration ClockTwo(0);
    REQUIRE(ClockTwo.getDuration() == 0);

    // duration ClockThree(-3);
    //REQUIRE(ClockThree.getDureation == Assert)

    duration ClockFour;
    REQUIRE(ClockFour.getDuration() == 0);
}

TEST_CASE("Tick")
{
    duration ClockOne(12);

    for(int i = 0; i < 3; i++)
        ClockOne.tick();
    REQUIRE(ClockOne.getDuration() == 15);

    ClockOne.tick(10);
    REQUIRE(ClockOne.getDuration() == 25);
}

TEST_CASE("SetAlarm")
{
    duration ClockOne(25);

    ClockOne.setAlarm(26);
    REQUIRE(ClockOne.tick() == 1);

    duration ClockTwo(0);

    ClockTwo.setAlarm(3);
    REQUIRE(ClockOne.tick(4) == 1);
}
// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

// Add your test cases. Dont forget to include header file. 