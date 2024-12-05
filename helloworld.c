#include <stdio.h>
#include <unistd.h> // For sleep function

int main() {
    int count;
    
    for(count = 1; count <= 5; count++) {
        printf("%d\n", count);
        sleep(1); // Delay for 1 second
    }

    return 0;
}