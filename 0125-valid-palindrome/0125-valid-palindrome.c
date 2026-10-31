bool isPalindrome(char* str) {
    size_t left = 0;
    size_t right = strlen(str) - 1;

    int first_ch = 0, second_ch = 0;

    while (left < right)
    {
         // left
        first_ch = tolower(str[left]);
        if (!isalnum(first_ch))
        {
            left++;
            continue;
        }

        // right
        second_ch = tolower(str[right]);
        if (!isalnum(second_ch))
        {
            right--;
            continue;
        }

        if (first_ch != second_ch)
        {
            return false;
        }

        left++; right--;
    }

    return true;
}