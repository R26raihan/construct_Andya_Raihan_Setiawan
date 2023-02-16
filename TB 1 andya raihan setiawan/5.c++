#include <iostream>
using namespace std;

int main(){
    string str="mercu buana";
    char vokal[5]={'a','i','u','e','o'};

    for (int i = 0; i < 5; i++)
    {
        int jumlah=0;
        for (int j = 0; j < str.length(); j++)
        {
            if (str[j]==vokal[i])
            {
                jumlah=jumlah=1;
            }
            
        }
        cout<<vokal[i]<<"="<<jumlah<<endl;
    }
    
    
}