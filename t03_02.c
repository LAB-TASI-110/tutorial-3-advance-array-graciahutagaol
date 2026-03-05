#include <stdio.h>

#define MAX_N 1000 // Batasan maksimum untuk jumlah nilai

int main() {
    int n, i;
    int scores[MAX_N]; // Array untuk menyimpan nilai-nilai
    int sum = 0;
    
    // Membaca jumlah nilai (n)
    scanf("%d", &n);
    
    // Membaca n nilai dan menghitung jumlahnya, serta menyimpannya ke dalam array
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }
    
    // Menghitung rata-rata
    double average = (double)sum / n;
    
    int count_above_average = 0;
    for (i = 0; i < n; i++) {
        if (scores[i] >= average) {
            count_above_average++;
        }
    }
    
    // Menampilkan jumlah, rata-rata, dan banyaknya mahasiswa di atas rata-rata sesuai format
    printf("%d\n", sum);
    printf("%.2f\n", average);
    printf("%d\n", count_above_average);
    
    return 0;
}
