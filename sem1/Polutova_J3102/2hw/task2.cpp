// Пользователь вводит число. Преобразовать его в другое число, цифры которого будут следовать в обратном порядке по сравнению с введенным пользователем 
//числом.

#include <iostream>

int main() {
    int n;
    std::cout << "Enter some number: ";
    std::cin >> n;
    int res;
    for (; n > 0; n / 10) {
        res *= 10;
        res += n % 10;
    }
}