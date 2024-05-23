// Fill out your copyright notice in the Description page of Project Settings.



#include "RandomEngine.h"
#include <limits>



// Add default functionality here for any IRandomEngine functions that are not pure virtual.



uint64 URandomEngine::GenerateRandomId()
{
    // Tuned to be fast as this function might get called relatively often.
    static thread_local std::mt19937_64 Engine((std::random_device())());
    std::uniform_int_distribution<uint64> Distribution(
        std::numeric_limits<uint64>::lowest(),
        std::numeric_limits<uint64>::max());
    return Distribution(Engine);

}
//使用 Mersenne Twister 19937-64 随机数生成器生成随机 64 位无符号整数并返回它


int32 URandomEngine::GenerateRandomSeed()
{
    std::random_device RandomDevice;
    //random_device提供来自各种来源的非确定性随机数。

    std::uniform_int_distribution<int32> Distribution(
        std::numeric_limits<int32>::lowest(),
        std::numeric_limits<int32>::max());
    //用于生成整个 int32 范围内的随机整数，int32 范围由 lowest 和 max定义
    return Distribution(RandomDevice);
}



int32 URandomEngine::GenerateSeed()
{
    return GetUniformIntInRange(
        std::numeric_limits<int32>::lowest(),
        std::numeric_limits<int32>::max());
}