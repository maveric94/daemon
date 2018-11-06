//main.cpp

#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void dummyProcess();

int main()
{
    dummyProcess();
    
    return 0;
}

void dummyProcess()
{
    double var = 1.0f;
    
    struct timespec time_to_sleep;
    time_to_sleep.tv_sec = 0;
    time_to_sleep.tv_nsec = 40000; //previous 50000;
    
    while(true)
    {
        for (int count = 0; count < 10; count++)
        {
            var *= ((double)rand());
        }
        nanosleep(&time_to_sleep, NULL);
    }
}
