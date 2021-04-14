#include "sequlist.h"
/**
 * 请编写一个算法函数partion(sequence_list *L)，尽可能快地将顺序表*L中的所有奇数调整到表的左边，
 * 所有偶数调整到表的右边，并分析算法的时间复杂度。
 * 
 * 算法的时间复杂度为O(n)
 */
void partion(sequence_list *L) {
    sequence_list *odd = (sequence_list*) malloc(sizeof(sequence_list));
    sequence_list *even = (sequence_list*) malloc(sizeof(sequence_list));
    initseqlist(odd);
    initseqlist(even);
    for (int i = 0; i < L->size; i++) {
        if (L->a[i] % 2 == 1) {
            odd->a[odd->size++] = L->a[i];
        } else {
            even->a[even->size++] = L->a[i];
        }
    }
    initseqlist(L);
    for (int i = 0; i < odd->size; i++) {
        L->a[L->size++] = odd->a[i];
    }
    for (int i = 0; i < even->size; i++) {
        L->a[L->size++] = even->a[i];
    }
}

int main() {
    sequence_list L;
    input(&L);
    partion(&L);
    print(&L);
}