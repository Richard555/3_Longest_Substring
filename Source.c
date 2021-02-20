#include <stdio.h>

int lengthOfLongestSubstring(char* s) {

    int len = 1;
    int max_len = 1;
    int sub_start = 0;

    if (s[0] == '\0')
        return 0;
    else if (s[1] == '\0')
        return 1;

    for (int i = 1; s[i] != 0; i++)         // i is the tail of a string
    {
        for (int j = sub_start; j < i; j++) // j is the head of a string
        {
            if (s[i] == s[j]) //same char
            {
                sub_start = j + 1;
                break;
            }
        }
        len = i - sub_start + 1;
        if (max_len < len)
            max_len = len;
    }
    return max_len;
}
void main(void)
{
    //char* a = "abcabcbb";
    char* a = "pwwkew";
    int ret = 0;
    ret = lengthOfLongestSubstring(a);
    printf("ret = %d ", ret);
}

