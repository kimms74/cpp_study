#include "Worker.h"
#include "Timer.h"  //body�� Worker.cpp������ Timer.h�� ���� �˸� ��
                    //dependency

void Worker::doSomething()
{
    Timer timer;    //start timer

                    // do some work here

    timer.elapsed(); //end timer and report elapsed time
}
