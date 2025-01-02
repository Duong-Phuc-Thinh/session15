#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "thinhdaden2006@gmail.com";
    int demchucai = 0, demchuso = 0, demkytudacbiet = 0;

    printf("Chuoi da khai bao: \"%s\"\n", chuoi);

    for (int i = 0; i < strlen(chuoi); i++) {
        if ((chuoi[i] >= 'A' && chuoi[i] <= 'Z') || (chuoi[i] >= 'a' && chuoi[i] <= 'z')) {
            demchucai++; 
        } else if (chuoi[i] >= '0' && chuoi[i] <= '9') {
            demchuso++;
        } else if (chuoi[i] != ' ') {
            demkytudacbiet++;
        }
    }
    printf("So ky tu la chu cai: %d\n", demchucai);
    printf("So ky tu la chu so: %d\n", demchuso);
    printf("So ky tu dac biet: %d\n", demkytudacbiet);
    return 0;
}

