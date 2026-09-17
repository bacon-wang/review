#include <stdio.h>

#define PERM_READ    (1u << 0)
#define PERM_WRITE   (1u << 1)
#define PERM_EXECUTE (1u << 2)

struct User {
    const char *name;
    unsigned int permissions;
};

int has_permission(const struct User *user, unsigned int permission) {
    return (user->permissions & permission) != 0u;
}

void print_permissions(const struct User *user) {
    printf("%s: read=%s, write=%s, execute=%s\n",
           user->name,
           has_permission(user, PERM_READ) ? "yes" : "no",
           has_permission(user, PERM_WRITE) ? "yes" : "no",
           has_permission(user, PERM_EXECUTE) ? "yes" : "no");
}

int main(void) {
    struct User user = {"Alice", PERM_READ};

    print_permissions(&user);

    user.permissions |= PERM_WRITE;
    print_permissions(&user);

    user.permissions &= ~PERM_READ;
    print_permissions(&user);

    printf("permissions = %u\n", user.permissions);
    return 0;
}