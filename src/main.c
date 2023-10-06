#include <unistd.h>

int main() {
    return execve( "/bin/ls",
            (char*[]){"ls", "-lh", NULL},
            (char*[]){NULL});
}
