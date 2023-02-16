 #include <iostream>

 using namespace std;

 int main(){
    int a[5]={85,70,75,90,80};
    int nilaipalingbesar=0;
    for(int i=0; i<5; i++){
        if(a[i]>nilaipalingbesar){
            nilaipalingbesar=a[i];
        }
    }
    cout<<nilaipalingbesar<<endl;
 }