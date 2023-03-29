#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    getc(stdin);

    while (n--) {
        stack<char> ASDASD;
        char s[140];
        gets(s);
        int len = strlen(s);
        for (int i = 0; i < len; i++) {
            if (s[i] == '(' || s[i] == '[') {
                ASDASD.push(s[i]);
            } else if (s[i] == ')') {
                if (ASDASD.empty() || ASDASD.top() != '('){
                    ASDASD.push('a');
                    break;
                }                ASDASD.pop();
            } else if (s[i] == ']') {
                if (ASDASD.empty() || ASDASD.top() != '['){
                    ASDASD.push('a');
                    break;
                }
                ASDASD.pop();
            }
        }

        if(ASDASD.empty()) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}