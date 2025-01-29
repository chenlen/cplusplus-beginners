#pragma once

#include <string>

class String
{
public:
    explicit String(int number);
    String(const String& rhs);
    String(String&& rhs) noexcept;
    String& operator=(const String& rhs);
    String& operator=(String&& rhs) noexcept;
    ~String();

public:
    std::string GetValue() const;

private:
    std::string value_;
};
