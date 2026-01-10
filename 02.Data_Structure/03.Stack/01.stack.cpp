// 스택. 고등학생 때, 자료구조 수업 수업에서 선생님이 뭔가
// 얘기해줬던 기억이 난다.
// 부끄럽게도 코딩 인생을 사는 동안, 스택을 적용해 본 적이 없다....

#include <iostream>
#include <stack>

int main(void) {
    std::stack<int> s;
    s.push(10); // 위에 10 넣기
    s.push(20); // 그 위에 20 넣기

    // 고로, 맨 위는 20임.
    int x = s.top(); // 20;

    // 근데 그 위에 있던 20을 제거.
    s.pop();    // 20 제거

    if (!s.empty()) {
        // 그럼 지금 가장 맨 위에 있는 값은 10이겠네?
        int y = s.top();

        // 출력하면 10 값을 확인할 수 있음.
        std::cout << "s.top(): " << y << std::endl;
    }

    return 0;
}