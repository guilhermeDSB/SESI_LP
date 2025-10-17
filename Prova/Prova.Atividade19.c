#include <stdio.h>

void DesenhaLinha(int quantidade) {
    for (int i = 0; i < quantidade; ++i) {
        putchar('=');
    }
    putchar('\n');
}

int main(void) {
    DesenhaLinha(8);  
    DesenhaLinha(15);  
}
