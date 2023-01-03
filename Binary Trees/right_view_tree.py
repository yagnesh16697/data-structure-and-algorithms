class Node:
    def __init__(self, key):
        self.data = key
        self.left = None
        self.right = None


def rightViewOfTree(root):
    max_level = [0]
    rightViewOfTreeUtil(root, 1, max_level)


def rightViewOfTreeUtil(root, level, max_level):
    if root is None:
        return
    if (level > max_level[0]):
        print(root.data)
        max_level[0] = level
    rightViewOfTreeUtil(root.right, level+1, max_level)
    rightViewOfTreeUtil(root.left, level+1, max_level)


if __name__ == "__main__":
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.right.left = Node(5)
    root.right.right = Node(6)
    root.right.left.left = Node(7)
    root.right.left.right = Node(8)

    rightViewOfTree(root)
