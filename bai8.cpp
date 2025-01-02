#include <stdio.h>
#include <string.h>

void vietHoaChuCaiDau(char chuoi[]) {
    int i;
    for (i = 0; i < strlen(chuoi); i++) {
        if ((i == 0 || chuoi[i - 1] == ' ') && (chuoi[i] >= 'a' && chuoi[i] <= 'z')) {
            chuoi[i] -= 32;
        }
    }
}

int main() {
    char chuoi[] = "thinhdaden dep trai sieu cap vu tru";

    printf("Chuoi ban dau: \"%s\"\n", chuoi);
    vietHoaChuCaiDau(chuoi);
    printf("Chuoi sau khi viet hoa chu cai dau: \"%s\"\n", chuoi);

    return 0;
}

