#include "../tests/arrayTests.hpp"
#include "../tests/iteratorTests.hpp"
#include "../tests/allocatorTests.hpp"

int main(){
    ::testing::InitGoogleTest();

    return RUN_ALL_TESTS();
}