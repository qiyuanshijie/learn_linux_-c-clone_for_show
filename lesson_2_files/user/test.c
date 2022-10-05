/*
 * @Author: yantanyi webside@tooeh.xyz
 * @Date: 2022-10-04 16:34:25
 * @LastEditors: yantanyi webside@tooeh.xyz
 * @LastEditTime: 2022-10-05 15:31:32
 * @FilePath: /dir_for_C_learning/lesson_2_files/user/test.c
 * @Description:
 *
 * Copyright (c) 2022 by yantanyi webside@tooeh.xyz, All Rights Reserved.
 */
#include "test.h"
int number_of_tests = 0;
/**
 * @brief 设置输入字符
 * @param test_number 设置输入量（必须是整型）
 * @return {*}
 */
void set_test_number(int test_number)
{
    number_of_tests = test_number + 8;
}
/**
 * @brief Testnumber
 * @return {*}
 */

int get_test_number(void)
{
    return number_of_tests;
}