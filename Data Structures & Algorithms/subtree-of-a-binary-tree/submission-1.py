# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:   
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        def issametree(root, subRoot):
            if not root and not subRoot:
                return True
            if not root or not subRoot or root.val!=subRoot.val:
                return False
            return (issametree(root.left,subRoot.left) and (issametree(root.right,subRoot.right)))


        if not subRoot:
            return True
        if not root and subRoot:
            return False
        if issametree(root,subRoot):
            return True
        
        return self.isSubtree(root.left,subRoot) or self.isSubtree(root.right,subRoot)
        