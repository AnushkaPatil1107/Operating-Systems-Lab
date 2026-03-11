#include <stdio.h>

int main() {
    int pages[50], frame[10];
    int n, f, i, j, k, flag, page_faults = 0, index = 0;

    printf("Enter number of pages: ");
    scanf("%d", &n);

    printf("Enter page reference string:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &pages[i]);

    printf("Enter number of frames: ");
    scanf("%d", &f);

    for(i = 0; i < f; i++)
        frame[i] = -1;

    for(i = 0; i < n; i++) {
        flag = 0;

        for(j = 0; j < f; j++) {
            if(frame[j] == pages[i]) {
                flag = 1;
                break;
            }
        }

        if(flag == 0) {
            frame[index] = pages[i];
            index = (index + 1) % f;
            page_faults++;

            printf("Page Fault: ");
            for(k = 0; k < f; k++)
                printf("%d ", frame[k]);
            printf("\n");
        }
    }

    printf("Total Page Faults = %d\n", page_faults);

    return 0;
}
