#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>
// #include <thread>




int main(int argc, char const *argv[])
{
    std::cout << "Everyhin is good" << std::endl;

    std::clock_t c_start = std::clock();
    auto t_start = std::chrono::high_resolution_clock::now();

    // Do something
    int j = 0;
    for (int i = 0; i < 100000; ++i)
    {
        j = j + i;
    }

    std::clock_t c_end = std::clock();
    auto t_end = std::chrono::high_resolution_clock::now();
 
    std::cout << std::fixed << std::setprecision(2) << "CPU time used: "
              << 1000.0 * (c_end-c_start) / CLOCKS_PER_SEC << " ms\n"
              << "Wall clock time passed: "
              << std::chrono::duration<double, std::milli>(t_end-t_start).count()
              << " ms\n";

    return 0;

}