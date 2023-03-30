#include <array>
#include <format>
#include <memory>
#include <Windows.h>

struct S {
    int a = 1;
    float b = 2.f;
    struct {
        std::string x = "abc";
        std::unique_ptr<S> y;
    } c;
};

std::string stringGen(int i, int j) {
    return std::format("{}-{}", i, 2 * j);
}

int main(int argc, char** argv) {
    int i = argc;
    std::string a = stringGen(8, i);


    std::string json = R"(
{
"name": "Foo Barson", "position": "Issue Fixer",
                "age": 928,
"family": {
                        "so": true,"children": ["Hewey", "Dewey", "Lewey"]}
}
)";


    S s;

    std::array<S, 5000> t;

    t[23].c.x = "hello sailor";



    HANDLE f = CreateFileA(
        "Z:/this-does-not-exist.md", GENERIC_READ, FILE_SHARE_READ, nullptr,
        OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr
    );


}
