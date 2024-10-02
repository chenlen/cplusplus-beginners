// © 2024 C++ 從入門到入土

#include "dynamic_array.h"
#include <utility>

DynamicIntArray::DynamicIntArray() :
    count_(0),
    values_(nullptr)
{}

//DynamicIntArray::DynamicIntArray(const DynamicIntArray& rhs) : DynamicIntArray()
//{
//    values_ = new int[rhs.count_];
//    for (size_t i = 0; i < rhs.count_; ++i)
//    {
//        values_[i] = rhs.values_[i];
//    }
//
//    count_ = rhs.count_;
//}
//
//DynamicIntArray::DynamicIntArray(DynamicIntArray&& rhs) noexcept :
//    count_(std::move(rhs.count_)),
//    values_(std::move(rhs.values_))
//{}
//
//DynamicIntArray& DynamicIntArray::operator=(const DynamicIntArray& rhs)
//{
//    if (this != &rhs)
//    {
//        delete [] values_;
//
//        values_ = new int[rhs.count_];
//        for (size_t i = 0; i < rhs.count_; ++i)
//        {
//            values_[i] = rhs.values_[i];
//        }
//
//        count_ = rhs.count_;
//    }
//
//    return *this;
//}
//
//DynamicIntArray& DynamicIntArray::operator=(DynamicIntArray&& rhs) noexcept
//{
//    if (this != &rhs)
//    {
//        count_ = std::move(rhs.count_);
//        values_ = std::move(rhs.values_);
//    }
//
//    return *this;
//}

DynamicIntArray::~DynamicIntArray()
{
    delete [] values_;
}

size_t DynamicIntArray::GetCount() const
{
    return count_;
}

void DynamicIntArray::PushBack(int value)
{
    auto new_values = new int[count_ + 1];
    for (size_t i = 0; i < count_; ++i)
    {
        new_values[i] = values_[i];
    }

    new_values[count_] = value;

    delete [] values_;
    values_ = new_values;

    ++count_;
}

void DynamicIntArray::SetValue(int value, size_t index)
{
    values_[index] = value;
}

int DynamicIntArray::GetValue(size_t index) const
{
    return values_[index];
}
