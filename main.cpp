#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main() {
    int Width, Height, p;//
    srand((int) time(NULL));
    cout << "please input Height and Width" << endl;
    cin >> Height >> Width;   /*�����A���̓���*/
    cout << "please input pattern 1,2,3" << endl;
    cin >> p;
    int field[Height][Width];
    if (p == 1) {   /*���_���c�ɐ��Ώ�*/
        for (int i = 0; i < Height; i++) {
            for (int j = 0; j < Width / 2; j++) {
                field[i][j] = rand() % 4 + 1;
                field[i][Width - j - 1] = field[i][j]; /*�������*/
            }
        }
        if (Width % 2 == 1) {   /*���̃}�X������̏ꍇ*/
            for (int i = 0; i < Height; i++) {
                field[i][Width / 2] = rand() % 4 + 1;
            }
        }
    }
    if (p == 2) {   /*���_�����ɐ��Ώ�*/
        for (int i = 0; i < Height / 2; i++) {
            for (int j = 0; j < Width; j++) {
                field[i][j] = rand() % 4 + 1;
                field[Height - i - 1][j] = field[i][j]; /*�������*/
            }
        }
        if (Height % 2 == 1) {   /*�c�̃}�X������̏ꍇ*/
            for (int j = 0; j < Width; j++) {
                field[Height / 2][j] = rand() % 4 + 1;
            }
        }
    }
    if(p == 3){   /*���_���_�Ώ�*/
        for (int i = 0; i < Height / 2; i++) {
            for (int j = 0; j < Width / 2; j++) {
                field[i][j] = rand() % 4 + 1;
                field[Height - i - 1][j] = field[i][j]; /*�������*/
                field[i][Width - j - 1] = field[i][j];
                field[Height - i - 1][Width - j - 1] = field[i][j];
            }
        }
        if (Width % 2 == 1) {   /*���̃}�X������̏ꍇ*/
            for (int i = 0; i < Height; i++) {
                field[i][Width / 2] = rand() % 4 + 1;
            }
        }
        if (Height % 2 == 1) {   /*�c�̃}�X������̏ꍇ*/
            for (int j = 0; j < Width; j++) {
                field[Height / 2][j] = rand() % 4 + 1;
            }
        }
    }
    for (int i = 0; i < Height; i++) {
        for (int j = 0; j < Width; j++) {
            cout << field[i][j];   /*�o��*/
            if(j != Width-1){
                cout << ",";
            }
        }
        cout << endl;
    }
}