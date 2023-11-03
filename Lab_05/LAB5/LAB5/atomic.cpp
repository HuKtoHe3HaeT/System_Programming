#include <iostream>
#include <thread>
#include <atomic>
#include <mutex>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int  value, iterationsPlus, iterationsMinus;
    std::cout << "������� ���������� �������� �����������: ";
    std::cin >> iterationsPlus;
    std::cout << "������� ���������� �������� ���������: ";
    std::cin >> iterationsMinus;
    std::cout << "������� ��������: ";
    std::cin >> value;


    atomic<float> counter(0);
    thread thread1([&]() {
        for (int i = 0; i < iterationsPlus; ++i) {
            counter.store(counter.load() + value);;            
        }
        });

    thread thread2([&]() {
        for (int i = 0; i < iterationsMinus; ++i) {
            counter.store(counter.load() - value);;
        }
        });
    

    thread1.join();
    thread2.join();
    cout << "�������� ���������� ����� �������� " << counter.load();

    return 0;
}