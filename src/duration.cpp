#include <assert.h>

duration::duration(/* args */)
{
    time = 0;
    alarm = -1;
    alarmHasBeenSet = false;
}

duration::duration(int t)
{
    assert(t >= 0);

    time = t;
    alarm = -1;
    alarmHasBeenSet = false;
}

int duration::getDuration()
{
    return time;
}

bool duration::checkAndUpdateAlarm()
{
    if (time >= alarm)
        alarm = 0;
        alarmHasBeenSet = false;
        return true;
    return false;
}

bool duration::tick()
{
    time++;

    return checkAndUpdateAlarm();
}

bool duration::tick(int amount)
{
    assert(amount > 0);

    time += amount;

    return checkAndUpdateAlarm();
}

void duration::setAlarm(int t)
{
    assert(t >= time);
    
    alarm = t;
    alarmHasBeenSet = true;
}

duration::~duration()
{
}
