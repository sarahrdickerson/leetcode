class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []

        for char in s:
            if char == "(" or char == "{" or char == "[":
                stack.append(char)
            elif stack:
                if char == ')' and stack.pop() != '(':
                    return False
                elif char == '}' and stack.pop() != '{':
                    return False
                elif char == ']' and stack.pop() != '[':
                    return False
            else:
                return False

        if stack:
            return False
        else:
            return True