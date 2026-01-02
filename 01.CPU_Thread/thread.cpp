#include <iostream>
#include <chrono>

int main(void) {
    auto start = std::chrono::high_resolution_clock::now();

    volatile int x = 0; // 컴파일러가 루프문 실행 안 할 수도 있어서 volatile 키워드 붙임
    for (int i = 0; i < 1000000000; i++) {
        x += i;
        // CPU의 클럭이 여기서 진행된다. 
        // 인간으로 치면, 심장박동.
        // 클럭이 진행되는 동안 아래 코드는 잠시 일시정지 된다.

        // 신기한 것은,
        // std::cout << "i: " << i << "\n";
        // 원래 실행 시간이 약 2초인데, 위 코드를 실행하면 20초 이상 늘어난다!
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start;

    std::cout << "Time: " << diff.count() << " sec\n";
    return 0;
}