#include <iostream>
using namespace std;

int main(){

    int nilai[5]={52, 26, 33, 15, 25};

   for (int  i = 0; i < 5; i++)
   {
    for (int a = 0; a < 5 -i -1; a++)
    {
        if (nilai [a]>nilai[a+1])
        {
            swap(nilai[a],nilai[a+1]);
        }
        
    
   }
   }
   for (int i = 0; i < 5; i++)
   {
    cout<<nilai[i]<<endl;
   }
   
   
    
}