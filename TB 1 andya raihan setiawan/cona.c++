#include <iostream>

using namespace std;
int main(){
    string s="pada suatu hari ada kancil mencuri ketimun";

    for (int i = 0; i < s.length(); i++)
    {
        char c=s[i];
        if (s[i]=='a')
        {
            s[i]='4';
        }
        if  (s[i]=='i')
        {
            s[i]='1';
        }
        
        cout<<s[i];
    }
    
}