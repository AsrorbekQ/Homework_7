#include <iostream>

using namespace std;

int sum_array[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0};

int multiply(int x, int y) {
    if (y == 0) {
        return 0;
    }

    if (y > 0) {
        return x + multiply(x, y - 1);
    }

    else {
        return multiply(x, -y) - x;
    }
}

int sum_of_digits(int n){
    int answer = 0;

    while(n>0){
        answer += n%10;
        n /= 10;
    }

    return answer;
}

void binary(int n){
    if (n == 0){
        return;
    }
    int ans = n % 2;
    binary(n / 2);

    cout << ans;
}

int row_sum(int column){
    int sum = 0;
    for (int j = 0; j < column; ++j) {
        int term;
        cin >> term;
        sum += term;
    }

    return sum;
}

int main() {

    cout << "Problem 1\n" << endl;
    int x, y;
    cout << "Enter the x and y:  ";
    cin >> x >> y;

    cout << "The answer is: " << multiply(x, y) << endl;

    cout << "Problem 2\n";
    int n;
    cout << "Enter the number:  ";
    cin >> n;

    cout << "The answer is " << sum_of_digits(n) << endl;

    cout << "Problem 3\n";
    int bin;

    cout << "Enter the number to convert it to binary: ";
    cin >> bin;
//  cout << "The binary form is " <<  << endl;
    binary(bin);
    cout << endl;

    cout << "Problem 4\n";
    int row, column;
    cout << "Enter the rows: ";
    cin >> row;
    cout << "Enter the columns: ";
    cin >> column;

    for (int i = 0; i < row; ++i) {
        sum_array[i] += row_sum(column);
    }

    for (int i : sum_array) {
        if (i != 0) {
            cout << i << endl;
        }
    }


    cout << "Problem 5\n";
    int r, c;
    cout << "Enter the size of the matrix: ";
    cin >> r >> c;
    
    int A[r][c], B[r][c], AB[r][c];

    cout << "Enter the content of the 1st matrix: ";
    for (int y = 0; y < r; ++y) {
        for (int e = 0; e < c; ++e) {
            cin >> A[y][e];
        }
    }

    cout << "Enter the content of the 2nd matrix: ";
    for (int y = 0; y < r; ++y) {
        for (int e = 0; e < c; ++e) {
            cin >> B[y][e];
        }
    }

    for (int y = 0; y < r; ++y) {
        for (int e = 0; e < c; ++e) {
            AB[y][e] =  A[y][e] + B[y][e];
        }
        cout << endl;
    }

    for (int y = 0; y < r; ++y) {
        for (int e = 0; e < c; ++e) {
            cout << AB[y][e] << " ";;
        }
        cout << endl;
    }



    cout << "\n***finished***\n";


    

    return 0;
}
