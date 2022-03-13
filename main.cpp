#include <iostream>

using namespace std;
#define ROW 10
#define COL 10

void menu() {
    cout << "1.加法\n"
         << "2.减法\n"
         << "3.数乘\n"
         << "4.乘法\n"
         << "5.幂\n"
         << "6.行最简\n"
         << "7.求逆\n"
         << "8.转置\n"
         << "0.退出\n";
}

/*矩阵加法*/
void matrix_add(int result[ROW][COL], int matrix_1[ROW][COL], int matrix_2[ROW][COL], int row1, int col1) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            result[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }
}

/*矩阵减法*/
void matrix_sub(int result[ROW][COL], int matrix_1[ROW][COL], int matrix_2[ROW][COL], int row1, int col1) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            result[i][j] = matrix_1[i][j] - matrix_2[i][j];
        }
    }
}

/*数乘*/
void matrix_num_mul(int result[ROW][COL], int matrix[ROW][COL], int row, int col, int c) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix[i][j] * c;
        }
    }
}

/*矩阵乘法*/
void matrix_mul(int result[ROW][COL], int matrix_1[ROW][COL], int row1, int col1, int matrix_2[ROW][COL], int row2,
                int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            int sum = 0;
            for (int k = 0; k < col1; k++) {
                sum += matrix_1[i][k] * matrix_2[k][j];
            }
            result[i][j] = sum;
        }
    }
}

/*矩阵的幂*/
void matrix_pow(int result[ROW][COL], int matrix[ROW][COL], int row, int col, int pow) {
    for (int i = 0; i < pow - 1; i++) {
        matrix_mul(result, matrix, row, col, matrix, row, col);
    }
}

/*行最简形式*/
void matrix_row_simplest(int result[ROW][COL], int matrix[ROW][COL], int row, int col) {
    for (int i = 0; i < row; i++) {
        /*将从这一行开始的每一行都除以这一行的首元素，使首元素变为1*/
        for (int row_count = i; row_count < row; row_count++) {
            if (matrix[row_count][i] != 0) {
                for (int col_count = i; col_count < col; col_count++) {
                    matrix[row_count][col_count] /= matrix[row_count][i];
                }
            }
        }
        /*消去1*/
        for (int row_count = i + 1; row_count < row; row_count++) {
            for (int col_count = 0; col_count < col; col_count++) {
                matrix[row_count][col_count] -= matrix[i][col_count];
            }
        }
    }
//    for(int i=0;i<row;i++){
//        /*如果搜元素就为0，就取找首元素不为0的*/
//        while(matrix[i][i]==0){
//            int row_count=i+1;
//            for(row_count=i+1;row_count<row;row_count++){
//                if(matrix[row_count][i]!=){
//
//                }
//            }
//        }
//    }
    /*复制结果*/
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix[i][j];
        }
    }
}

/*求逆*/
void matrix_inverse(int matrix[ROW][COL], int row, int col) {

}

/*矩阵转置*/
void matrix_transpose(int result[ROW][COL], int matrix[ROW][COL], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

/*输出结果矩阵*/
void matrix_print(int result[ROW][COL], int row, int col) {
    cout << "结果如下：" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

/*对于单个矩阵运算的输入*/
void input_one_matrix(int matrix[ROW][COL], int *row, int *col) {
    cout << "请输入矩阵的行、列：";
    cin >> *row >> *col;
    cout << "请输入矩阵:" << endl;
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            cin >> matrix[i][j];
        }
    }
}

/*对于双矩阵运算的输入*/
void input_two_matrixs(int matrix_1[ROW][COL], int *row1, int *col1, int matrix_2[ROW][COL], int *row2, int *col2) {
    cout << "请输入矩阵一的行、列：";
    cin >> *row1 >> *col1;
    cout << "请输入矩阵" << endl;
    for (int i = 0; i < *row1; i++) {
        for (int j = 0; j < *col1; j++) {
            cin >> matrix_1[i][j];
        }
    }
    cout << "请输入矩阵二的行、列：";
    cin >> *row2 >> *col2;
    cout << "请输入矩阵" << endl;
    for (int i = 0; i < *row2; i++) {
        for (int j = 0; j < *col2; j++) {
            cin >> matrix_2[i][j];
        }
    }
}

int main() {
    int arr[ROW][COL] = {0};
    int brr[ROW][COL] = {0};
    int crr[ROW][COL] = {0};
    int row_1, col_1, row_2, col_2, pow, c = 0;
    int number = 0;
    cout << "请输入对应运算方法前的序号进行运算：" << endl;

    do {
        menu();
        cin >> number;
        switch (number) {
            case 1:
                input_two_matrixs(arr, &row_1, &col_1, brr, &row_2, &col_2);
                matrix_add(crr, arr, brr, row_1, col_1);
                matrix_print(crr, row_1, col_2);
                break;
            case 2:
                input_two_matrixs(arr, &row_1, &col_1, brr, &row_2, &col_2);
                matrix_sub(crr, arr, brr, row_1, col_1);
                matrix_print(crr, row_1, col_2);
                break;
            case 3:
                input_one_matrix(arr, &row_1, &col_1);
                cout << "请输入数乘的常数：";
                cin >> c;
                cout << endl;
                matrix_num_mul(crr, arr, row_1, col_1, c);
                matrix_print(crr, row_1, col_1);
                break;
            case 4:
                input_two_matrixs(arr, &row_1, &col_1, brr, &row_2, &col_2);
                matrix_mul(crr, arr, row_1, col_1, brr, row_2, col_2);
                matrix_print(crr, row_1, col_2);
                break;
            case 5:
                input_one_matrix(arr, &row_1, &col_1);
                cout << "请输入幂：";
                cin >> pow;
                cout << endl;
                matrix_pow(crr, arr, row_1, col_1, pow);
                matrix_print(crr, row_1, col_1);
                break;
            case 6:
                input_one_matrix(arr, &row_1, &col_1);
                matrix_row_simplest(crr, arr, row_1, col_1);
                matrix_print(crr, row_1, col_1);
                cout << "等待完善." << endl;
                break;
            case 7:
                input_one_matrix(arr, &row_1, &col_1);
                cout << "等待完善." << endl;
                break;
            case 8:
                input_one_matrix(arr, &row_1, &col_1);
                matrix_transpose(crr, arr, row_1, col_1);
                matrix_print(crr, col_1, row_1);
                break;
            case 0:
                cout << "退出." << endl;
                break;
            default:
                cout << "输入错误,请重新输入." << endl;
                break;
        }
    } while (number);
    system("pause");
    return 0;
}
