#ifndef Duration_H
#define Duration_H

#define STACKSIZE 10

class duration
{
private:
    /* data */
    int time;
    int alarm;
    bool alarmHasBeenSet;
    bool checkAndUpdateAlarm();
public:
    duration(/* args */);
    int getDuration();
    duration(int t);
    bool tick();
    bool tick(int amount);
    void setAlarm(int t);
    ~duration();
};

#endif

