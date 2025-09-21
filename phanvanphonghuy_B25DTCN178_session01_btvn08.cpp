#include <stdio.h>
#include <math.h>
#include <unistd.h>

//em khong biet ve...
int main() {
    int diem;
    printf("he thong dang bat dau...\n");
    sleep(3);
    do {
        printf("vui long nhap diem cua ban (0-10): ");
        scanf("%d", &diem);
        if (diem < 0 || diem > 10) {
            printf("\ndiem cua ban khong hop le, vui long nhap lai!\n\n");
            sleep(2);
        }
    } while (diem < 0 || diem > 10);
    printf("\nhe thong dang xu ly...");
    sleep(3);
    printf("\ndiem cua ban la: %d", diem);
    printf("\ndang xep hoc luc...");
    sleep(3);
    if (diem >= 5) {
        printf("\nhoc luc: dat\n");
        
    } 
    else {
        printf("\nhoc luc: khong dat\n");
    }
    printf("da luu vao he thong(ket thuc).")
    return 0;
}
