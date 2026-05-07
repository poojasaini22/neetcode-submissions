# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        # return 1+max(self.maxDepth(root.left), self.maxDepth(root.right))
        level=0
        q=deque([root])
        while q:
            # we need this for loop for counting level
            # len is calculated only once so we dont have 
            # to store it in another variable
            for i in range(len(q)):
                node=q.popleft()
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            level+=1
        return level





