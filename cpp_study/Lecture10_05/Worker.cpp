#include "Worker.h"
#include "Timer.h"  //body인 Worker.cpp에서만 Timer.h에 대해 알면 됨
                    //dependency

void Worker::doSomething()
{
    Timer timer;    //start timer

                    // do some work here

    timer.elapsed(); //end timer and report elapsed time
}
