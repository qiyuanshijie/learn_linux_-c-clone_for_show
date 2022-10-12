/*
 * @Author: yantanyi webside@tooeh.xyz
 * @Date: 2022-10-03 21:12:12
 * @LastEditors: yantanyi webside@tooeh.xyz
 * @LastEditTime: 2022-10-10 19:20:47
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
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    memcpy(a + 3, a, 5);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    set_test_number(18);
    call_print_test(get_test_number());
    printf("%d\n", (int)sizeof(int));
    printf("Hello_differs_9\n");
    return 0;
}