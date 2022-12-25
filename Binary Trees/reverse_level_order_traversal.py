class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.data = key


def printReverseOrderTraversal(root):
    if root is None:
        return
    queue = []
    queue.append(root)

    while (len(queue) > 0):
        print(queue[0].data, " ")
        node = queue.pop(0)
        if node.right is not None:
            queue.append(node.right)
        if node.left is not None:
            queue.append(node.left)


root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.right.right = Node(5)

print("Reverse Level Order Traveresal:")
printReverseOrderTraversal(root)

#         1
#     2       3 
# 4               5
# 
# OP: 1,3,2,4,5    