/**
 * @copyright Antoni Kiedos
 * @date 26.02.2021-
 */
#pragma once
#include<vector>
#include<utility>
#include<string>
#include<iostream>
#define __macros__
#define __RNA__
#include<includes.hpp>
/**
* @name STRANDDNA
* @brief DNA strand enumeration
*/
enum class STRANDDNA
{
    C, G, A, T,
    Citozyne = C, Guanine = G, Adenine = A, Tymine = T
};
/**
 * @name DNAToString
 * @brief ToString for DNA strands
 * @param nb nitrogenous base
 * @returns std::string
 */
std::string DNAToString(STRANDDNA nb)
{
    if(nb == STRANDDNA::A) return "A";
    else if(nb == STRANDDNA::T) return "T";
    else if(nb == STRANDDNA::C) return "C";
    else if(nb == STRANDDNA::G) return "G";
    else throw DNAPOSSIBILITIES;
}
/**
 * @name PrintNitroBase
 * @brief prints nitrogenous base to console
 * @param nb nitrogenous base to print
 * @returns nothing
 */
void PrintNitroBase(STRANDDNA nb)
{
    std::cout << DNAToString(nb);
}
/**
 * @name operator <<
 * @brief prints nitrogenous base to console
 * @param nb nitrogenous base to print
 * @param out auxiliary to compile file successfully
 * @returns out
 */
std::ostream& operator <<(std::ostream& out, STRANDDNA nb)
{
    out << DNAToString(nb);
    return out;
}
/**
 * @name STRANDRNA
 * @brief RNA strand enumeration
 */
enum class STRANDRNA
{
    C, G, A, U,
    Citozyne = C, Guanine = G, Adenine = A, Uracile = U
};
std::string RNAToString(STRANDRNA nb)
{
    if(nb == STRANDRNA::A) return "A";
    else if(nb == STRANDRNA::U) return "U";
    else if(nb == STRANDRNA::C) return "C";
    else if(nb == STRANDRNA::G) return "G";
    else throw RNAPOSSIBILITIES;
}
void PrintNitroBase(STRANDRNA nb)
{
    std::cout << RNAToString(nb);
}
std::ostream& operator <<(std::ostream& out, STRANDRNA nb)
{
    out << RNAToString(nb);
    return out;
}
/**
 * @name DNA
 * @brief DNA class
 * @param strand private DNA strand
 * @param GetHelis() public from strand member gives complemented helis
 * @param ComplementStrand() public gives strand complement to member strand
 * @param DNA::Complement() public gives nitrogenous base complement to argument
 * @param Complement() public gives nitrogenous base complement to members one at index passed as arg
 */
class DNA
{
private:
    std::vector<STRANDDNA> strand;
public:
    std::vector<std::pair<STRANDDNA, STRANDDNA>> GetHelis()
    {
        std::vector<std::pair<STRANDDNA, STRANDDNA>> ret;
        for(std::size_t i = 0; i < (this->strand).size(); i++)
        {
            ret[i].first = strand[i];
            ret[i].second = this->Complement(i);
        }
        return ret;
    }
    std::vector<STRANDDNA> ComplementStrand()
    {
        std::vector<STRANDDNA> complement;
        for(std::size_t i = 0; i < (this->strand).size(); i++)
        {
            if(this->strand[i] == STRANDDNA::C) complement.push_back(STRANDDNA::G);
            else if(this->strand[i] == STRANDDNA::G) complement.push_back(STRANDDNA::C);
            else if(this->strand[i] == STRANDDNA::A) complement.push_back(STRANDDNA::T);
            else if(this->strand[i] == STRANDDNA::T) complement.push_back(STRANDDNA::A);
            else throw DNAPOSSIBILITIES;
        }
        return complement;
    }
    static STRANDDNA Complement(STRANDDNA nitrogenous_base)
    {
        if(nitrogenous_base == STRANDDNA::A) return STRANDDNA::T;
        else if(nitrogenous_base == STRANDDNA::T) return STRANDDNA::A;
        else if(nitrogenous_base == STRANDDNA::C) return STRANDDNA::G;
        else if(nitrogenous_base == STRANDDNA::G) return STRANDDNA::C;
        else throw DNAPOSSIBILITIES;
    }
    STRANDDNA Complement(std::size_t i)
    {
        return DNA::Complement(this->strand[i]);
    }
    // [[Deprecated("Transcript is only for backward compatibility."
    // "Use Translate(\"RNA\", DNAToTranslate) instead.")]]
    RNA Transcript()
    {
        RNA rna;
        for(auto nitrobase : this->strand)
        {
            if(nitrobase == STRANDDNA::A) rna.strand.push_back(STRANDRNA::A);
            else if(nitrobase == STRANDDNA::T) rna.strand.push_back(STRANDRNA::U);
            else if(nitrobase == STRANDDNA::G) rna.strand.push_back(STRANDRNA::G);
            else if(nitrobase == STRANDDNA::C) rna.strand.push_back(STRANDRNA::C);
            else throw DNAPOSSIBILITIES;
        }
    }
    // DNA() = default;    // Default
    explicit DNA() : strand{} {};    // Zero initialisation
    explicit DNA(std::vector<STRANDDNA> strand) noexcept    // Common
    {
        this->strand = strand;
    }
    explicit DNA(DNA& other) noexcept    // Copy
    {
        this->strand = other.strand;
    }
    explicit DNA(DNA&& other) noexcept    // Move
    {
        this->strand = other.strand;
        other.strand = {};
    }
    explicit DNA(std::vector<STRANDDNA>&& strand_) : strand(std::move(strand_)) {}
    DNA& operator =(DNA&& other) noexcept
    {
        this->strand = other.strand;
        other.strand = {};
        return *this;
    }
};