int func(int i, int j) {
    return i * j;
}

int func2(int i, int j) {
    return i*i + j*j;
}

int func3(int i, int j) {
    return i*i*i + j*j*j;
}


int main(int argc, char** argv) {
    return func(1,2) * func2(3,4) * func3(5,6);

}