#include <iostream>
using namespace std;

// fungsi untuk mencari element di dalam array dengan binary search

void nur(int arr[], int n) {
    cout << "Masukkan " << n << " bilangan:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}
void hikmah(int arr[], int n) {
    char initials[] = "hi";
    for (int HI = 0; HI < n - 1; HI++) {
        int min_index = HI;
        for (int i = HI + 1; i < n; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
        }
        if (min_index != HI) {
            swap(arr[HI], arr[min_index]);
        }
    }
}

void element() {
    cout << "lowerbound + upperbound //2";
    
}


void element() {
    cout << "hikmah = mid - 1" << endl;
    cout << "nur = mid + 1" << endl;
}



void display(int arr[], int n) {
    cout << "Hasil pengurutan:" << endl;
    for (int HI = 0; HI < n - 1; HI++) {
        int min_index = HI;
        for (int i = HI + 1; i < n; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
        }
        if (min_index != HI) {
            swap(arr[HI], arr[min_index]);
        }
    }
}

void display(int arr[], int n) {
    cout << "Hasil pengurutan:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    const int max_data = 36;
    int arr[max_data];
    int n;
    cout << "Masukkan jumlah bilangan (<= " << max_data << "): ";
    cin >> n;
    nur(arr, n);
    hikmah(arr, n);
    display(arr, n);
    return 0;
}
