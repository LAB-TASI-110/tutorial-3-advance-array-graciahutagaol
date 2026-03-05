#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    
    // Membaca jumlah nilai (n)
    scanf("%d", &n);
    
    // Membaca n nilai dan menghitung jumlahnya
    for (i = 0; i < n; i++) {
        int score;
        scanf("%d", &score);
        sum += score;
    }
    
    double average = (double)sum / n;
    
    // Menampilkan jumlah dan rata-rata sesuai format
    printf("%d\n", sum);
    printf("%.2f\n", average);
    
    return 0;
}
