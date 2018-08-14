#include "../inc/Balanced.hpp"

bool Balance::checkBalance(const std::string& s)
{
    if(s.size()<2 or s.size()%2!=0) return false;
    if(s.size()==2 and (s=="()" or s=="[]" or s=="{}")) return true;
}
