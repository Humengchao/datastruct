#include "sequlist.h"
/**
 * 已知顺序表L1，L2中数据从小到大排序，请用尽可能快的方法将L1，L2中的数据合并到L3中，使数据在L3中按升序排列
 */
void merge(sequence_list *L1, sequence_list *L2, sequence_list *L3) {
    initseqlist(L3);
    int r1 = 0, r2 = 0;
    while(r1 < L1->size && r2 < L2->size) {
        if (L1->a[r1] > L2->a[r2])
            L3->a[L3->size++] = L2->a[r2++];
        else
            L3->a[L3->size++] = L1->a[r1++];
    }
    if (r1 != L1->size) {
        for (int i = r1; i < L1->size; i++)
            L3->a[L3->size++] = L1->a[i];
    }
    if (r2 != L2->size) {
        for (int i = r2; i < L2->size; i++)
            L3->a[L3->size++] = L2->a[i];
    }
}

int main() {
    sequence_list L1, L2, L3;
    input(&L1);
    input(&L2);
    merge(&L1, &L2, &L3);
    print(&L3);
}