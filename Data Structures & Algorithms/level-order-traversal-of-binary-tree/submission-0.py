# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []
        res=[]
        curr=deque([root])
        
        while curr:
            level=[]
            for _ in range(len(curr)):
                node=curr.popleft()
                level.append(node.val)
                if node.left:
                    curr.append(node.left)
                if node.right:
                    curr.append(node.right)
            
            res.append(level)
        return res