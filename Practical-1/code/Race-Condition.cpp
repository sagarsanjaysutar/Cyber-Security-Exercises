#include <iostream>
#include <thread>

int counter = 0; // Shared variable

void increment()
{
    for (int i = 0; i < 100000; ++i)
    {
        counter++; // Not thread-safe!
    }
}

int main()
{
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << "Final counter value: " << counter << std::endl;
    return 0;
}
