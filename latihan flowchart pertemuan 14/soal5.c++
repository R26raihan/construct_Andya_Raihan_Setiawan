#include <iostream>
using namespace std;
int main()
{
int data[10];
int maks, min;
float rerata;
int jumlah = 0;
for (int i = 0; i < 10; i++)
{
cout << "Masukkan bilangan ke-" << i+1 << ": ";
cin >> data[i];
jumlah += data[i];
if (i == 0)
{
maks = data[i];
min = data[i];
}
else 
{
if (data[i] > maks)
maks = data[i];
if (data[i] < min)
min = data[i];
}
}
rerata = (float)jumlah / 10; 
cout << endl << "Data bilangan yang dimasukkan: " << endl;
for (int i = 0; i < 10; i++)
cout << data[i] << " ";
cout << endl;
cout << "Nilai terbesar: " << maks << endl;
cout << "Nilai terkecil: " << min << endl;
cout << "Rerata: " << rerata << endl;
return 0;
}