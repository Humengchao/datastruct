#include "sequlist.h"
/**
 * 顺序表的倒置
 */
void reverse(sequence_list *L) {
    int tem;
    for (int i = 0; i < L->size/2; i++) {
        tem = L->a[i];
        L->a[i] = L->a[L->size - 1 - i];
        L->a[L->size - 1 - i] = tem;
    }
}

int main() {
    sequence_list L;
    input(&L);
    print(&L);
    reverse(&L);
    print(&L);
}