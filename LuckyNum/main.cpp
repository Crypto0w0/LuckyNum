#include <iostream>
using namespace std;

bool IfLucky(int num){
    int sum = 0;
    for (int n = 0; n < 6; n++){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int length(int n){
    int l = 0;
    while (n > 1){
        n /= 10;
        l++;
    }
    return l;
}

int main() {
    int num;
    try{
        cin >> num;
        int l = length(num);
        if (l <= 5){
            throw out_of_range("\nLess then 6 symb");
        }
        else if (l >= 7){
            throw out_of_range("\nMore than 6 symb");
        }
    }
    catch (exception& ex){
        cout << ex.what();
    }
    IfLucky(num);
}
