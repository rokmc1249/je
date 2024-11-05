#include <stdio.h>
#include<stdlib.h>
#include <string.h>

//int process_value(int value) {
//    int result = 0;
//
//    if (value < 0) {
//        return -1;  // 이곳에서 함수가 종료되므로 이후 코드가 실행되지 않음
//    }
//
//    
//
//    else if (value == 0) 
//    
//    
//        return result;  // 이곳에서 함수가 종료되므로 아래 코드는 도달할 수 없음
//    
//    
//    
//    result = 1;
//
//    // 이 코드에 도달하지 못할 수 있음 (Unreachable)
//    printf("Processing complete, result: %d\n", result);
//    return result;
//}
// 
//void null_f(int** p) { // 포인터 자체를 가리키는 포인터
//    *p = malloc(sizeof(int));  // 함수 내부에서 할당된 메모리가 이어짐
//    if (p == NULL) {
//        return;
//    }
//    for (int i = 0; i < 3; i++) {
//        **(p+i) = i;
//    }
//    // 이중 포인터
//}



 
float float_division_zero(float x) {
   
    float y = (x * x) - 20.0;
    float result = 5.0 / (y-y);
    return result;

}
void leak() {
    int* p = malloc(4);

}
void df() {
    int* p = malloc(4);
    if (p == NULL) {
        return;
    }
    *p = 13;
    free(p);
    free(p);
}
int lang_struct_mrs(int j) {
    if (j == 1) return 2;
    else if (j == 2) return 1;
}

int f(int a) {
    if (a < 1) return -1;
    if (a == 1) return 1;
    return a * f(a - 1);          /* 'Recursion' warning issued here */
}

int main() {
    int* p = malloc(4);
    if (p == NULL) {
        return NULL;
    }
    for (int i = 0; i < 2; i++) {
        *p++ = i + 1;
    }
    p -= 2;
    for (int i = 0; i < 2; i++) {
        printf("%d\n", *p++);
    }
    p -= 2;
    p = NULL; 
    free(p);

    float a = 5.0;
    
    
    float result =  float_division_zero(a);

    return 0;
}
    //p = NULL;
    //if (!p) {
    //    printf("할당전이라서 메모리가 없음 %p\n", p);
    //}
    //p = malloc(sizeof(int));
    //*p = 12;
    //
    ////free(p);
    ////printf("해제만 해준 상태 데이터: %d, 주소: %p\n", *p, p); // 값은 쓰레기값 할당받은 메모리 영역은 존재함
    //free(p);
    //p = NULL;
    //if (p) {
    //    printf("해제는 했지만 null로 메모리 영역을 채우진 않음, 데이터 : %d주소: %p\n",*p, p);
    //}
    //else {
    //    printf("해제는 했고 null로 메모리 영역을 채움 그래서 데이터에 접근 불가 주소: %p\n", p);
    //}
   // printf("%s\n", hello());
    

