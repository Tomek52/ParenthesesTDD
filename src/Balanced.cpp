#include "../inc/Balanced.hpp"
#include <algorithm>
#include <iterator>
#include <iostream>

bool Balance::checkBalance(std::string s)
{
    auto x =std::string::npos;
    if(s.size()==0 or s.size()%2!=0) return false;
    while(!s.empty())
    {
        if(s.find("()")!=std::string::npos) x=s.find("()");
        else if(s.find("[]")!=std::string::npos) x=s.find("[]");
        else return false;
        if(x!=std::string::npos)
        {
            auto iter = s.begin()+x;
            s.erase(iter,iter+2);
        }
    }
    if(s.empty()) return true; 
}
