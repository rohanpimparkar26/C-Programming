class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        bracket_map = {')': '(', '}': '{', ']': '['}

        for char in s:
            if char in bracket_map:
                top_element = stack.pop() if stack else '#'
                if top_element != bracket_map[char]:
                    return False
            else:
                stack.append(char)

        return not stack

# Example test cases
# sol = Solution()
# print(sol.isValid("()"))       # True
# print(sol.isValid("()[]{}"))   # True
# print(sol.isValid("(]"))       # False
# print(sol.isValid("([])"))     # True

# class Solution:
#     def isValid(self, s: str) -> bool:
#         stack = []
#         bracket_map = {')': '(', '}': '{', ']': '['}

#         for char in s:
#             if char in bracket_map:
#                 top_element = stack.pop() if stack else '#'
#                 if top_element != bracket_map[char]:
#                     return False
#             else:
#                 stack.append(char)

#         return not stack

# # Taking user input
# s = input("Enter a string of brackets: ")
# sol = Solution()
# print(sol.isValid(s))
