#include<iostream>
using namespace std;

bool isComposite(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return true; // Trả về true nếu n là hợp số
    }
    return false; // Trả về false nếu n không phải là hợp số
}

int main() {
    int N, S = 0;
    do {
        cout << "nhap N: ";
        cin >> N;
    } while (N <= 1);

    for (int i = 2; i <= N; i++) {
        if (isComposite(i)) { // Kiểm tra xem i có phải là hợp số không
            S += i; // Nếu đúng, cộng i vào tổng S
        }
    }

    cout << "vay tong S la: " << S;
    return 0;
}
