#pragma once
#include <cstdint>
#include <string>
#include <string_view>

struct guid_t
{
    uint32_t x = 0;
    uint32_t y = 0;
    uint32_t z = 0;
    uint32_t w = 0;
public:

public:
    static guid_t create_new();
    static guid_t parse(std::string_view str);
public:
    std::string to_string() const;
    bool is_empty() const;
    bool operator==(guid_t right) const;

};