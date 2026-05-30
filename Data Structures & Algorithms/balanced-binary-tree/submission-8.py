# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        
        def dfs(root):
            if not root:
                return 0
            leftnode=dfs(root.left)
            if leftnode==-1:
                return -1
            rightnode=dfs(root.right)
            if rightnode==-1:
                return -1
            if abs(leftnode-rightnode)>1:
                return -1
            return 1+max(leftnode,rightnode)
        dfs(root)
        return dfs(root)!=-1