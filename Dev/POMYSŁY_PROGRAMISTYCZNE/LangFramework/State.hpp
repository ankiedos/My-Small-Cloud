#ifndef GLF_STATE_HPP_INCLUDED
#define GLF_STATE_HPP_INCLUDED
#include<string>

struct State
{
    std::size_t line, col;
    std::string file_name;
    State(const std::size_t& l, const std::size_t& c, const std::string& fn = "") : line{l}, col{c}, file_name{fn} {}
    ~State() = default;
};
#endif