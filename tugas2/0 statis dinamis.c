int arr[5] = {1, 2, 3, 4, 5};  // Array statis dengan ukuran tetap 5

int main() { 
    // Alokasi array dinamis dengan 5 elemen 
    int *arr = (int *)malloc(5 * sizeof(int)); 

    // Membebaskan memori return 0;
    for (int i = 0; i < 5; i++) { arr[i] = i + 1; } free(arr);  
}
    