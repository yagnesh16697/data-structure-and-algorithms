class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.data = key


def heightOfTree(root):
    if root is None:
        return -1
    else:    
        leftHeight = heightOfTree(root.left)
        rightHeight = heightOfTree(root.right)

        return(max(leftHeight, rightHeight)+1)


root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.left.left = Node(5)


print("Height of Tree:",heightOfTree(root))

#             1
#         2       3  
#     4     
# 5     

#OP:3