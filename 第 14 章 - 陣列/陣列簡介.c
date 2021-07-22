#include <stdio.h>
//陣列在變數定義時具有一個特殊的初始化語法

int main(){
    //元素資料型態  陣列變數名稱[元素個數]={第一個元素的值, 第二個元素的值...};
    int Arr1[6] = {0, 0, 0, 0, 0, 0};

    //初始化時最少要指定一個值，未指定的部分會被自動指定為0
    int Arr2[6] = {0};

    //在有初始化時，陣列元素個數值可省略,會以初始化元素個數取代
    int Arr3[] = {0, 0, 0, 0, 0, 0};
}
