#include "libexam.h"

#include <stdio.h>
#include <stdlib.h>

struct user_st* get_user()
{
    struct user_st *user = (struct user_st*)malloc(sizeof(struct user_st));

    user->age = 21;
    user->name = "jujemu";
    user->email = "jujemu@naver.com";

    return user;
}

void get_info(struct user_st *user)
{
    printf("name of age: %d\n", user->age);
    printf("name of user: %s\n", user->name);
    printf("name of email: %s\n", user->email);
}
