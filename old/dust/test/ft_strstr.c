int main(void)
{
    char str1[] = "1234567890";
    char str2[] = "123456567890";
    char str3[] = "";
    char to_find1[] = "567";
    char to_find2[] = "";

    printf("**************\n");
    printf("*    test1   *\n");
    printf("**************\n\n");
    printf("---   strstr   ---\n");
    printf("str: %s\nto_find: %s\nresult: %s\n\n", str1, to_find1, strstr(str1, to_find1));
    sleep(2);
    printf("---   ft_strstr   ---\n");
    printf("str: %s\nto_find: %s\nresult: %s\n\n", str1, to_find1, ft_strstr(str1, to_find1));

    sleep(2);
    printf("**************\n");
    printf("*    test2   *\n");
    printf("**************\n\n");
    printf("---   strstr   ---\n");
    printf("str: %s\nto_find: %s\nresult: %s\n\n", str2, to_find1, strstr(str2, to_find1));
    sleep(2);
    printf("---   ft_strstr   ---\n");
    printf("str: %s\nto_find: %s\nresult: %s\n\n", str2, to_find1, ft_strstr(str2, to_find1));

    sleep(2);
    printf("**************\n");
    printf("*    test3   *\n");
    printf("**************\n\n");
    printf("---   strstr   ---\n");
    printf("str: %s\nto_find: %s\nresult: %s\n\n", str3, to_find1,strstr(str3, to_find1));
    sleep(2);
    printf("---   ft_strstr   ---\n");
    printf("str: %s\nto_find: %s\nresult: %s\n\n", str3, to_find1,ft_strstr(str3, to_find1));

    sleep(2);
    printf("**************\n");
    printf("* final test *\n");
    printf("**************\n\n");
    printf("---   strstr   ---\n");
    printf("str: %s\nto_find: %s\nresult: %s\n\n", str1, to_find2, strstr(str1, to_find2));
    sleep(2);
    printf("---   ft_strstr   ---\n");
    sleep(4);
    printf("str: %s\nto_find: %s\nresult: %s\n\n", str1, to_find2, ft_strstr(str1, to_find2));
}