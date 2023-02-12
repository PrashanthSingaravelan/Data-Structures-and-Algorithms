class Node(object):
    def __init__(self, value):
        self.value  = value
        self.left   = None
        self.right  = None

class Binary_Tree(object):
    def __init__(self, root):
        self.root = Node(root)
        
    def tree_height(self, node):
        if node is None:
            return -1
        left_height  = self.tree_height(node.left)
        right_height = self.tree_height(node.right)
        return 1 + max(left_height, right_height)

if __name__ == "__main__":
    tree                 = Binary_Tree(1)
    tree.root.left       = Node(2)
    tree.root.right      = Node(3)
    tree.root.left.left  = Node(4)
    tree.root.left.right = Node(5)
    
    print(tree.tree_height(tree.root))