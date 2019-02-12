#include <string>
#include <vector>
#include <csignal>

int main(int argc, char** argv) {
    std::string s = argv[0];
    int i = s.length();
    std::string t = std::to_string(argc);

    int j = i - argc;
    int k = j * j * j;

    bool shouldBreak = false;
    if (shouldBreak) {
#ifdef WIN32
        __debugbreak();
#else
        std::raise(SIGINT);
#endif
    }

    int* is = new int[5];
    is[0] = 0; is[1] = 1; is[2] = 2; is[3] = 3; is[4] = 4

    std::vector<int> v = { 0, 1, 2, 3, 4 ,5, 6, 7 };
    std::vector<std::string> v2 = { "foo", "bar", "foobar" };
}
