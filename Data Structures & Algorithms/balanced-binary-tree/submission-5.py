# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        # res=0
        # self.node=True
        # def height(curr):
        #     if curr==None:
        #         return 0
        #     left=height(curr.left)
        #     right=height(curr.right)
        #     if abs(left-right)>1:
        #          self.node=False
        #     return 1+max(left,right)
        # height(root)
        # return self.node
        def dfs(root):
            if root==None:
                return [True,0]
            left=dfs(root.left)
            right=dfs(root.right)
            balanced=(left[0] and right[0] and
            abs(left[1]-right[1])<=1)
            height=1+max(left[1],right[1])
            return [balanced,height]
        return dfs(root)[0]

       