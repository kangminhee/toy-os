#include "login.h"

struct user user_table[] = {
    {"root", "password123"},
    {"mini", "himini"}
};

const int NUM_USERS = sizeof(user_table) / sizeof(user_table[0]);

