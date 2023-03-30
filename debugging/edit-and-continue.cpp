#include <chrono>
#include <iostream>
#include <thread>

int foo(int a) {
    return 5 * a * a;
}

void print(int i) {
    std::cout << "Printing the number: " << i << '\n';
}

int main(int argc, char** argv) {
    //std::this_thread::sleep_for(std::chrono::seconds(5));

    int i = foo(12);

    // print(i);

    return 0;
}