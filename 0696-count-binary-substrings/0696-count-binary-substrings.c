int countBinarySubstrings(char* s) {
    int n = strlen(s);
    int res = 0, prev = 0, curr = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            curr++;
        } else {
            prev = curr;
            curr = 1;
        }
        if (curr <= prev) {
            res++;
        }
    }
    return res;
}