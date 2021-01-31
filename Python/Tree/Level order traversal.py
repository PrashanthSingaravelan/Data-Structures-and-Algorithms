class Node():
    def __init__(self,value):
        self.value  = value
        self.left  = None
        self.right = None

class Binary_Tree():
    def __init__(self,root):
        self.root = Node(root)
    
    def Iterative_Postorder(self,t):
        list1=[]
        list2=[]
        
        list1.append(t)
        while list1:
            node = list1.pop()
            list2.append(node)
            
            if node.left:
                list1.append(node.left)
                
            if node.right:
                list1.append(node.right)
        
        while list2:
            node=list2.pop()
            print(node.value,end=" ")
            
#        1
#      /  \
#     2    3
#    / \  / \
#   4  5 6   7

### Main function

# Intialising the tree
tree = Binary_Tree(1)       
tree.root.left  = Node(2)
tree.root.right = Node(3)

tree.root.left.left  = Node(4)
tree.root.left.right = Node(5)

tree.root.right.left  = Node(6)
tree.root.right.right = Node(7)
##

obj1 = Stack()
obj2 = Stack()
tree.Iterative_Postorder(tree.root)