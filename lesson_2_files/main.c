/*
 * @Author: yantanyi webside@tooeh.xyz
 * @Date: 2022-10-03 21:12:12
 * @LastEditors: yantanyi webside@tooeh.xyz
 * @LastEditTime: 2022-10-05 20:27:57
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
    set_test_number(18);
    call_print_test(get_test_number());
    printf("%d\n", (int)sizeof(int));
    printf("Hello_differs_9\n");
    return 0;
}