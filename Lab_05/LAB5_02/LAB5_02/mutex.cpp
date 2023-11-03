#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

int main() {

    setlocale(LC_ALL, "ru");
    int  value, iterationsPlus, iterationsMinus;
    std::cout << "Введите количество итераций прибавления: ";
    std::cin >> iterationsPlus;
    std::cout << "Введите количество итераций отнимания: ";
    std::cin >> iterationsMinus;
    std::cout << "Введите значение: ";
    std::cin >> value;

    float counter = 0;
    mutex counterMutex;
    thread thread1([&]() {
        for (int i = 0; i < iterationsPlus; ++i) {
            counterMutex.lock();
            counter += value;
            counterMutex.unlock();
        }
        });

    thread thread2([&]() {
        for (int i = 0; i < iterationsMinus; ++i) {
            counterMutex.lock();
            counter -= value;
            counterMutex.unlock();
        }
        });

    thread1.join();
    thread2.join();

    cout << "Значение переменной после операций " << counter << endl;

    return 0;
}