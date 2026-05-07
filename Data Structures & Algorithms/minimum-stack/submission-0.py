class MinStack:

  
    def __init__(self):
        self.stack=[]

    def push(self, val: int) -> None:
        self.stack.append(val)

    def pop(self) -> None:
        if self.stack:
            self.stack.pop()

    def top(self) -> int:
        if self.stack:
            return self.stack[-1]

    def getMin(self) -> int:
        temp=[]
        minimum=self.stack[-1]
        while self.stack:
            topval=self.stack.pop()
            minimum=min(minimum,topval)
            temp.append(topval)
        while len(temp):
            self.stack.append(temp.pop())
        return minimum

