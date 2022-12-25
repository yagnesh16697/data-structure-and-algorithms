class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.data = key


def printTree(root):
    if root is None:
        return
    queue = []
    queue.append(root)

    while (len(queue) > 0):
        print(queue[0].data)
        node = queue.pop(0)
        if node.left is not None:
            queue.append(node.left)
        if node.right is not None:
            queue.append(node.right)


def mirrorOfaTree(root):
    if root is None:
        return
    mirrorOfaTree(root.left)
    mirrorOfaTree(root.right)
    root.left, root.right = root.right, root.left

root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

print("Mirror Of a Tree: ")
printTree(root)
print("\n")
mirrorOfaTree(root)
printTree(root)