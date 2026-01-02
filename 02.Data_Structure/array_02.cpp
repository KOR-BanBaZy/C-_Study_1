/*
    - C 스타일 배열은 대입 연산자가 정의되어 있지 않기 때문에
    arr1 = arr2 형태의 복사가 불가능하다.

    - 따라서 std::copy_n 등을 사용해 배열의 각 요소 값을
    명시적으로 복사해야 한다.

    - 아래 코드에서 두 배열은 서로 다른 메모리를 차지하는 것을
    확인할 수 있다.

    - 자바스크립트, C# 에서는 배열이 객체이다. 따라서 깊은 복사, 얕은 복사라는
    개념이 존재하는데, C 배열에서는 그런 개념이 없다. C 배열은 객체가 아니기
    때문이다. (단순한 연속 메모리)
        - 위 개념을 명확히 알기 위해서는 힙 메모리라는 것의 이해가 필요하다.

*/

#include <iostream>

int main(void) {
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int copiedArr[10];
    int arraySize = sizeof(array) / sizeof(int);

    std::copy_n(array, arraySize, copiedArr);   // 깊은 복사
    copiedArr[0] = 100;

    for (int i = 0; i < arraySize; i++) {
        std::cout << array[i] << std::endl;
    }

    return 0;
}