#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest/doctest.h"

TEST_CASE("not testing anything") {
    int answer = 42;
    CHECK(answer == 42);
}
