/*
 * @Author: yantanyi webside@tooeh.xyz
 * @Date: 2022-10-03 21:13:02
 * @LastEditors: yantanyi webside@tooeh.xyz
 * @LastEditTime: 2022-12-06 22:15:56
 * @FilePath: /dir_for_C_learning/lesson_3/user/proj.c
 * @Description:
 *
 * Copyright (c) 2022 by yantanyi webside@tooeh.xyz, All Rights Reserved.
 */
#include "proj.h"

/**
 * @description:  用于变量输入打印次数
 * @param {int} i 用于输入次数
 * @return {*} 返回0
 */
static void print_test(int i)
{
    int test = i;
    while (test--)
    {
        printf("Testing6 %d\n", test);
    }
}
/**
 * @description:  用于变量输入打印次数
 * @param  i 用于输入次数
 * @brief 输入变量打印
 * @return {*} 返回0
 */
void call_print_test(int i)
{
    print_test(6);
}