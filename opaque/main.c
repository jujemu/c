#include "libextern.h"

#include <stdio.h>

int main(void)
{
    struct user_st *user = get_user();

    get_info(user);

    return 0;
}
