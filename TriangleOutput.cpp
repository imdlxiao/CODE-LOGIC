#include <iostream>


using namespace std;

void positiveTriangle(int count);
void invertedTriangle(int count);

int main() {
    int num;
    cout<<"��������Ҫ���е�������:";
    scanf("%d", &num);
    //���������
    invertedTriangle(num);
    //���������
    cout<<endl;
    positiveTriangle(num);

}
/**
 * ���������
 * @param count
 */
void invertedTriangle(int count){
    for (int i = count; i > 0 ; i--) {  //����
        int n = 0;
        while (n < (count - i)){  //�ո�����ж�
            cout<<" ";
            n++;
        }
        for (int j = 0; j < i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

/**
 * ���������
 * @param count
 */
void positiveTriangle(int count){
    for (int i = 1; i <= count; i++) {//����������
        for (int j = 0; j < i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}