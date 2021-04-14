#include "sequlist.h"
/**
 * 假设顺序表la和lb分别存放两个整数集合，函数inter(sequence_list *L1, sequence_list *L2, sequence_list *L3)的功能是将
 * 顺序表L1与L2的交集存放到顺序表L3中
 */
void inter(sequence_list *L1, sequence_list *L2, sequence_list *L3) {
    initseqlist(L3);

    for (int i = 0; i < L1->size; i++) {
        for (int j = 0; j < L2->size; j++) {
            if (L1->a[i] == L2->a[j]) {
                L3->a[L3->size++] = L1->a[i];
            }
        }
    }
    
}

int main() {
    sequence_list L1, L2, L3;
    input(&L1);
    input(&L2);
    inter(&L1, &L2, &L3);
    print(&L3);
}