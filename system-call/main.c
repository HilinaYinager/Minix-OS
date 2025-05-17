#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>

int main() {
    const char *filename = "test.txt";  // Make sure this file exists
    uid_t new_uid = 1001;               // UID of 'Hilin Yinager'
    gid_t new_gid = 1001;               // GID of 'Hilin Yinager'

    // Attempt to change ownership
    if (chown(filename, new_uid, new_gid) == 0) {
        printf("Ownership of '%s' changed successfully to UID %d and GID %d.\n", filename, new_uid, new_gid);
    } else {
        perror("chown failed");
        return 1;
    }

    return 0;
}
