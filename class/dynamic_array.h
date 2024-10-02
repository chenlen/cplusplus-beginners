// © 2024 C++ 從入門到入土

#pragma once

class DynamicIntArray
{
public:
    DynamicIntArray();
    //DynamicIntArray(const DynamicIntArray& rhs);
    //DynamicIntArray(DynamicIntArray&& rhs) noexcept;
    //DynamicIntArray& operator=(const DynamicIntArray& rhs);
    //DynamicIntArray& operator=(DynamicIntArray&& rhs) noexcept;
    ~DynamicIntArray();

public:
    size_t GetCount() const;

    void PushBack(int value);

    void SetValue(int value, size_t index);
    int GetValue(size_t index) const;

private:
    size_t count_;
    int* values_;
};
