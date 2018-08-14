#include "../inc/Balanced.hpp"

bool Balance::checkBalance(const std::string& s)
{
    if(s.size()<2 or s.size()%2!=0) return false;
    if(s.size()==2 and (s=="()" or s=="[]" or s=="{}")) return true;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(' and s[i+1]==')') i++;
        else if(s[i]=='[' and s[i+1]==']') i++;
        else if(s[i]=='{' and s[i+1]=='}') i++;
        else return false;
        if(i+1==s.size()) return true;
    }
}
