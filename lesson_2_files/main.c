/*
 * @Author: yantanyi webside@tooeh.xyz
 * @Date: 2022-10-03 21:12:12
 * @LastEditors: yantanyi webside@tooeh.xyz
 * @LastEditTime: 2022-10-05 15:07:27
 * @FilePath: /dir_for_C_learning/lesson_2_files/main.c
 * @Description:
 *
 * Copyright (c) 2022 by yantanyi webside@tooeh.xyz, All Rights Reserved.
 */

#include "proj.h"
#include "test.h"
int main(void)
{
    //  666 eee jjj    print_test(3);
    set_test_number(100);
    call_print_test(get_test_number());
    printf("Hello_differs_10\n");
    return 0;
}