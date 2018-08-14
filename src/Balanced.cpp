#include "../inc/Balanced.hpp"
#include <algorithm>
#include <iterator>

bool Balance::checkBalance(std::string s)
{
    bool flag = false;
    if(s.size()==0 or s.size()%2!=0) return false;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='[' and s[i+1]==']') i++;
        else {flag=true; break;}
        if(i+1==s.size()) return true;
    }
    
    if(flag==true)
    {
       while(!s.empty())
       {
           auto x=s.find("[]");
           if(x!=std::string::npos)
           {
               auto iter = s.begin()+x;
               s.erase(iter,iter+2);
           }
           else return false;
       }
       if(s.empty()) return true;
    }
}
