#include <stdio.h>
#include <string.h>

void xoakytu(char chuoi[], char kytu) {
    int i, j = 0;
    int dodai = strlen(chuoi);
    char ketqua[dodai];
    for (i = 0; i < dodai; i++) {
        if (chuoi[i] != kytu) {
            ketqua[j++] = chuoi[i]; 
        }
    }
    ketqua[j] = '\0'; 

    strcpy(chuoi, ketqua);
}
int main() {
    char chuoi[] = "Thinhdaden dep trai sieu cap vu tru";
    char kytu;

    printf("Chuoi ban dau: \"%s\"\n", chuoi);

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &kytu);

    xoakytu(chuoi, kytu);

    printf("Chuoi sau khi xoa ky tu '%c': \"%s\"\n", kytu, chuoi);

    return 0;
}

