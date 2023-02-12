class Node(object):
    def __init__(self, value):
        self.value  = value
        self.left   = None
        self.right  = None

class Binary_Tree(object):
    def __init__(self, root):
        self.root = Node(root)

    def traversal(self, start, traversal_method):
        if traversal_method == "pre-order traversal":  return self.preorder_traversal(start, "")
        if traversal_method == "in-order traversal":   return self.inorder_traversal(start, "")
        if traversal_method == "post-order traversal": return self.postorder_traversal(start, "")

    def postorder_traversal(self, start, traversing_element):  ## left, right, root
        if start:
            traversing_element = self.preorder_traversal(start.left,  traversing_element)
            traversing_element = self.preorder_traversal(start.right, traversing_element)
            traversing_element = traversing_element + (str(start.value) + "-")
        return traversing_element

    def inorder_traversal(self, start, traversing_element): ## left, root, right
        if start:
            traversing_element = self.preorder_traversal(start.left,  traversing_element)
            traversing_element = traversing_element + (str(start.value) + "-")
            traversing_element = self.preorder_traversal(start.right, traversing_element)
        return traversing_element

    def preorder_traversal(self, start, traversing_element):  ## root, left, right
        if start:
            traversing_element = traversing_element + (str(start.value) + "-")
            traversing_element = self.preorder_traversal(start.left,  traversing_element)
            traversing_element = self.preorder_traversal(start.right, traversing_element)
        return traversing_element

if __name__ == "__main__":
    tree                 = Binary_Tree(1)
    tree.root.left       = Node(2)
    tree.root.right      = Node(3)
    tree.root.left.left  = Node(4)
    tree.root.left.right = Node(5)

    print("Pre-Order Traversal : ",tree.traversal(tree.root, "pre-order traversal"))
    print("In-Order Traversal : ",tree.traversal(tree.root, "in-order traversal"))
    print("Post-Order Traversal : ",tree.traversal(tree.root, "post-order traversal"))
    