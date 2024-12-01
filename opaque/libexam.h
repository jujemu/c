/**
 * 내부 헤더파일
 */
#define BUF_SIZE 128

struct user_st
{
    int age;
    char *name;
    char *email;
};

struct user_st* get_user();
void get_info(struct user_st *user);
