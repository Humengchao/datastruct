#include "sequlist.h"
/**
 * 将顺序表L1的数据进行分类，奇数存到L2中，偶数存到L3中
 */

void sprit(sequence_list *L1, sequence_list *L2, sequence_list *L3) {
    initseqlist(L2);
    initseqlist(L3);
    int t;
    for (int i = 0; i < L1->size; i++) {
        t = L1->a[i];
        if (t % 2 == 1) {
            L2->a[L2->size++] = t;
        } else {
            L3->a[L3->size++] = t;
        }
    }
    
}

int main() {
    sequence_list L1, L2, L3;
    input(&L1);
    sprit(&L1, &L2, &L3);
    print(&L1);
    print(&L2);
    print(&L3);
}