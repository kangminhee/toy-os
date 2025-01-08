#ifndef LOGIN_H
#define LOGIN_H

struct user {
    char username[16];
    char password[16];
};

extern struct user user_table[];

extern const int NUM_USERS;

#endif