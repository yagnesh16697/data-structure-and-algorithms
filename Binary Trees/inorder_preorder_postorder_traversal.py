from collections import deque
class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.data = key


def inorder(root):
    if root is None:
        return
    inorder(root.left)
    print(root.data, end=' ')
    inorder(root.right)

def inorderIterative(root):
    stack = deque()
    curr = root
    while stack or curr:
        if curr:
            stack.append(curr)
            curr = curr.left
        else:
            curr = stack.pop()
            print(curr.data, end=' ')
            curr = curr.right
 
def preorder(root):
    if root is None:
        return
    print(root.data, end=" ")
    preorder(root.left)
    preorder(root.right)

def preorderIterative(root):
    if root is None:
        return
    stack = deque()
    stack.append(root)
    while stack:
        curr = stack.pop()
        print(curr.data, end=' ')
        if curr.right:
            stack.append(curr.right)
        if curr.left:
            stack.append(curr.left)

def preorderIterative(root):
    if root is None:
        return
    stack = deque()
    stack.append(root)
    while stack:
        curr = stack.pop()
        print(curr.data, end=' ')
        if curr.right:
            stack.append(curr.right)
        if curr.left:
            stack.append(curr.left)

def postorder(root):
    if root is None:
        return
    postorder(root.left)
    postorder(root.right)
    print(root.data, end=" ")

def postorderIterative(root):
    if root is None:
        return
    stack = deque()
    stack.append(root)
    out = deque()
    while stack:
        curr = stack.pop()
        out.append(curr.data)
        if curr.left:
            stack.append(curr.left)
        if curr.right:
            stack.append(curr.right)
    while out:
        print(out.pop(), end=' ')

if __name__ == '__main__':

    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.right.left = Node(5)
    root.right.right = Node(6)
    root.right.left.left = Node(7)
    root.right.left.right = Node(8)

    print("Inorder:")
    inorder(root)
    print("\nInorder Iterative:")
    inorderIterative(root)
    print("\nPreorder:")
    preorder(root)
    print("\nPreorder Iterative:")
    preorderIterative(root)
    print("\nPostorder:")
    postorder(root)
    print("\nPostorder Iterative:")
    postorderIterative(root)