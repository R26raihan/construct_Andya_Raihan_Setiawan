#include <iostream>

using namespace std;

int main() {
    float jarak_ke_bestie = 20.0; // jarak ke rumah Bestie dalam km
    float jarak_ke_random = 10.0; // jarak dari rumah Bestie ke tempat random dalam km
    float efisiensi_bensin = 12.0; // efisiensi bensin mobil dalam km/liter
    float harga_bensin = 10000.0; // harga bensin per liter dalam rupiah

    float total_jarak = jarak_ke_bestie + jarak_ke_random + jarak_ke_bestie;
    // Jarak total yang ditempuh = jarak dari rumah Alice ke rumah Bestie + jarak dari rumah Bestie ke tempat random + jarak dari tempat random kembali ke rumah Alice

    float total_bensin = total_jarak / efisiensi_bensin;
    // Total bensin yang diperlukan = jarak total yang ditempuh / efisiensi bensin

    float total_biaya = total_bensin * harga_bensin;
    // Total biaya yang dikeluarkan = total bensin yang diperlukan * harga bensin per liter

    cout << "Total biaya bensin yang dikeluarkan oleh Alice adalah: Rp " << total_biaya << endl;
    cout << "jika harga bensin 1 liternya = Rp 10000  dan alice mengeluarkan uangnya Rp 41666  untuk biaya bensin maka perkiraan bensin yang di gunakan alice sekitar 4 liter bensin"<<endl;



    return 0;
}
