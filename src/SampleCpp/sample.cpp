/*----------------------------------------------------------------------------------------------------------------------
    thread sınıfının detach fonksiyonu
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <thread>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <mutex>
#include <semaphore>

constexpr int queue_size{ 10 };

std::size_t g_queue[queue_size];
std::size_t g_head, g_tail;

inline void randomize()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

void thread_proc(std::size_t n)
{
    randomize();

    for (std::size_t i{ 0 }; i < n; ++i) {
        std::cout << std::rand() % 100 << ' ';
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::seconds(1));        
    }
}

int main()
{
    using namespace std;

    thread t{ thread_proc, 5 };

    t.detach();

    t.join();

    return 0;
}