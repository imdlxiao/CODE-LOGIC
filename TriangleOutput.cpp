#include <iostream>


using namespace std;

void positiveTriangle(int count);
void invertedTriangle(int count);

int main() {
    int num;
    cout<<"请输入需要几行的三角形:";
    scanf("%d", &num);
    //倒三角输出
    invertedTriangle(num);
    //正三角输出
    cout<<endl;
    positiveTriangle(num);

}
/**
 * 倒三角输出
 * @param count
 */
void invertedTriangle(int count){
    for (int i = count; i > 0 ; i--) {  //行数
        int n = 0;
        while (n < (count - i)){  //空格规律判断
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
 * 正三角输出
 * @param count
 */
void positiveTriangle(int count){
    for (int i = 1; i <= count; i++) {//外层控制行数
        for (int j = 0; j < i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}