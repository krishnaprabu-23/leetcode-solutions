from collections import Counter

class Solution(object):
    def isAnagram(self, s, t):
        # Time Complexity: O(n)
        # Space Complexity: O(1) if lowercase English letters, O(n) for Unicode
        return Counter(s) == Counter(t)

        