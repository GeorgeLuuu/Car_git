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
//ʹ�� Mersenne Twister 19937-64 ������������������ 64 λ�޷���������������


int32 URandomEngine::GenerateRandomSeed()
{
    std::random_device RandomDevice;
    //random_device�ṩ���Ը�����Դ�ķ�ȷ�����������

    std::uniform_int_distribution<int32> Distribution(
        std::numeric_limits<int32>::lowest(),
        std::numeric_limits<int32>::max());
    //������������ int32 ��Χ�ڵ����������int32 ��Χ�� lowest �� max����
    return Distribution(RandomDevice);
}



int32 URandomEngine::GenerateSeed()
{
    return GetUniformIntInRange(
        std::numeric_limits<int32>::lowest(),
        std::numeric_limits<int32>::max());
}