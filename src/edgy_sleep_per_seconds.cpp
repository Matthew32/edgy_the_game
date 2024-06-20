#include "edgy_sleep_per_seconds.h"
#include "iostream"

namespace edgy
{
    void sleep_per_seconds::sleep_seconds(int seconds)
    {
        sleep(seconds);
    };
};