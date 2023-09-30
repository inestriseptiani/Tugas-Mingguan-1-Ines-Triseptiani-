#include <iostream>

int main() {
    int n;
    double total = 0.0;
    const int passScore = 70;
    
    std::cout << "Masukkan jumlah mahasiswa: ";
    std::cin >> n;
    
    double nilai[n];
    
    for (int i = 0; i < n; i++) {
        std::cout << "Masukkan nilai mahasiswa ke-" << i+1 << ": ";
        std::cin >> nilai[i];
        total += nilai[i];
    }
    
    double rataRata = total / n;
    
    std::cout << "Rata-rata nilai mahasiswa: " << rataRata << std::endl;
    
    if (rataRata >= passScore) {
        std::cout << "Selamat, mahasiswa lulus!" << std::endl;
    } else {
        std::cout << "Maaf, mahasiswa tidak lulus." << std::endl;
    }
    
    return 0;
}
