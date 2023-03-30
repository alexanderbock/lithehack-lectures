#include <iostream>

int count = 0;
int* t = nullptr;

int a(int f) {
    ++count;
    const int i = count % 2 ? 0 : a(f + 1);
    //if (count == 7) {
    //    *t = f;
    //}
    return i + f;
}

int b(int f) {
    const int i = a(f);
    const int j = a(2 * f);
    return i + j;
}

int c(int f) {
    const int i = b(f);
    const int j = b(5 * f);
    return i + j;
}

int d(int f) {
    const int i = c(f);
    const int j = c(10 * f);
    return i + j;
}

int main(int argc, char** argv) {
    int i = 2;
    int j = d(i);

    std::cout << j << std::endl;
    return 0;
}
