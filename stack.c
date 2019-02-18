#include <stdio.h>

int add(int a, int b){
    int x = 10;
    int y = 20;
    x = a+x;
    y = b+y; 
    int ret = x + y;

    return ret;

}

int doCalc(int num1, int num2){
    int ret = add(num1, num2);
    return ret;
}

int main(){
    int param1 = 1;
    int param2 = 2;
    int result = doCalc(param1,param2);
    printf("result is%d\n",result);
}
