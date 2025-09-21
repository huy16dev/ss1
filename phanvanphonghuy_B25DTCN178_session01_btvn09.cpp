#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main() {
    int ve;
    printf("=== HE THONG DAT VE MAY BAY ===\nHe thong dang tim chuyen bay, vui long cho giay lat...");
    sleep(2);
    printf("\nDa Tim Thay!");
    sleep(2);
    do {
        printf("\nVui long chon chuyen bay:\n");
        printf("1. Ha Noi -> HCM\n");
        printf("2. HCM -> Da Nang\n");
        printf("3. Da Nang -> Ha Noi\n");
        printf("Chon (1-3): ");
        scanf("%d", &ve);
        getchar(); 

        if (ve < 1 || ve > 3) {
            printf("Vui long nhap lai!\n");
        }
    } while (ve < 1 || ve > 3);

    printf("\nHe thong dang tim chuyen bay phu hop...\n");
    sleep(3);
    printf("Da tim thay chuyen bay!\n");
    char hoten[50];
    printf("=== NHAP THONG TIN KHACH HANG ===\n");
    printf("Ho va ten: ");
    fgets(hoten, sizeof(hoten), stdin);
    hoten[strcspn(hoten, "\n")] = '\0';
    printf("Dang xu ly...");
    sleep(2);
    printf("\n=== TRANG THAI VE ===\n");
    printf("Khach hang: %s\n", hoten);
    printf("Trang thai: Da xac nhan\n");
    printf("Cam on ban da su dung dich vu!\n");

    return 0;
}
