#ifndef GLF_RULE_HPP_INCLUDED
#define GLF_RULE_HPP_INCLUDED
#include<vector>
#include<string>

struct Rule
{
    bool ids_can_start_with_digits;
    bool literals_exist;
    bool literals_can_be_mixed;
    std::vector<std::string> suffix_literals;
    std::vector<std::string> prefix_literals;
    bool literals_can_be_user_defined;
    bool leading_zeros_in_num;
    bool float_parts_can_be_omitted;
    bool whitespace_sensitive;
    std::vector<char> not_standalone_tokens;
    bool case_sensitive;
    explicit Rule(const bool& i, const bool& l1, const bool& l2,
    const std::vector<std::string>& suffix, const std::vector<std::string>& prefix,
    const bool& l3, const bool& leading, const bool& f, const bool& ws_sensitive, const std::vector<char>& nst, const bool& c)
    : ids_can_start_with_digits{i}, literals_exist{l1}, literals_can_be_mixed{l2}, suffix_literals{suffix}, prefix_literals{prefix}, literals_can_be_user_defined{l3},
    leading_zeros_in_num{leading}, float_parts_can_be_omitted{f}, whitespace_sensitive{ws_sensitive}, not_standalone_tokens{nst}, case_sensitive{c} {}
    ~Rule() = default;
};
#endif