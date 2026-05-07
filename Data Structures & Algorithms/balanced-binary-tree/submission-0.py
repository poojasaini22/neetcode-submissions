# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        res=0
        node=True
        def height(curr):
            nonlocal node
            if curr==None:
                return 0
            left=height(curr.left)
            right=height(curr.right)
            if abs(left-right)>1:
                 node=False
            return 1+max(left,right)
        height(root)
        if node==False:
            return False
        else:
            return True