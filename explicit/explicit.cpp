#include "explicit.h"

String::String(int number) :
    value_(std::to_string(number))
{
}

String::String(const String& rhs) :
    value_(rhs.value_)
{
}

String::String(String&& rhs) noexcept :
    value_(std::move(rhs.value_))
{
}

String& String::operator=(const String& rhs)
{
    if (this != &rhs)
    {
        value_ = rhs.value_;
    }

    return *this;
}

String& String::operator=(String&& rhs) noexcept
{
    if (this != &rhs)
    {
        value_ = std::move(rhs.value_);
    }

    return *this;
}

String::~String()
{
}

std::string String::GetValue() const
{
    return value_;
}
