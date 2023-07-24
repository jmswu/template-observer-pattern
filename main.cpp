#include <cstdio>
#include <cstdlib>

struct display
{
    static void update(int val)
    {
        std::printf("send to display: %i\n", val);
    }
};

struct log
{
    static void update(int val)
    {
        std::printf("send to log: %i\n", val);
    }
};

template<typename... Ops>
struct subject
{
    static void update(int val)
    {
        (Ops::update(val), ...);
    }
};

template<typename... Ts>
int adder(Ts... ts)
{
    return (ts + ...);
};

int main()
{

    using subject1 = subject<display, log>;

    subject1::update(42);

    auto sum = adder(1,2,3);

    std::printf("sum: %i\n", sum);

    return EXIT_SUCCESS;
}