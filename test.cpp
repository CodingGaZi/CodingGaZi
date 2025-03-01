#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
inline int Read() {
    int num = 0, f = 1; char ch = getchar();
    for (; !isdigit(ch); ch = getchar()) if (ch == '-') f = -1;
    for (; isdigit(ch); ch = getchar()) num = (num << 1) + (num << 3) + ch - '0';
    return num * f;
}
int main() {
    int n = Read();
    for (int i = 1; i <= n; i++) {
        int a = Read(), b = Read();
        printf("%d\n", a + b);
    }
    return 0;
}