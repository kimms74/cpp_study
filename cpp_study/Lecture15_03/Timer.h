#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

class Timer //lecture 10_05���� ������   //elapsed() return ���� double�� ������
{
    using clock_t = std::chrono::high_resolution_clock;
    using second_t = std::chrono::duration<double, std::ratio<1>>;

    std::chrono::time_point<clock_t> start_time = clock_t::now();

public:
    double elapsed()    //void�� �ƴ� double�� return
    {
        std::chrono::time_point<clock_t> end_time = clock_t::now();

        return std::chrono::duration_cast<second_t>(end_time - start_time).count();
    }
};