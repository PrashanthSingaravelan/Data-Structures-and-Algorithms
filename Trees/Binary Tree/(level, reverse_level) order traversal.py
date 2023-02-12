class Queue(object):
    
    def __init__(self):
        self.queue = []
        
    def is_empty(self):
        return len(self.queue) == 0  ## if len(queue) is 0, will return true
        
    def enqueue(self, element):
        self.queue.insert(0, element)
        
    def dequeue(self):
        if not self.is_empty():
            return self.queue.pop()
        
    def peek(self):
        if not self.is_empty():
 ## since we are going to enqueue the elements as node, we need only the value in that node
            return self.queue[-1].value 

 ## Over-riding the original len()   
    def __len__(self): 
        return len(self.queue)

class Stack(object):

    def __init__(self):
        self.stack = []
        
    def is_empty(self):
        return len(self.stack) == 0  ## if len(queue) is 0, will return true
        
    def push(self, element):
        self.stack.append(element)
        
    def pop(self):
        if not self.is_empty():
            return self.stack.pop()
        
    def peek(self):
        if not self.is_empty():
 ## since we are going to push the elements as node, we need only the value in that node
            return self.stack[-1].value 

 ## Over-riding the original len()   
    def __len__(self): 
        return len(self.stack)
    
    def elements(self):
        self.stack_elements = []
        while (len(self.stack) != 0):
            self.stack_elements.append(self.stack.pop())
        return self.stack_elements


class Node(object):
    def __init__(self, value):
        self.value  = value
        self.left   = None
        self.right  = None

class Binary_Tree(object):
    def __init__(self, root):
        self.root = Node(root)

    def reverse_level_order(self, start):  ## root, left, right

        queue = Queue()  ## enqueue the entire node
        
        ## maintaining the answer
        stack = Stack()  ## push only the node-value
        
        queue.enqueue(start)
        
        while (len(queue) > 0):
            node = queue.dequeue()
            if node.right:
                queue.enqueue(node.right)
                
            if node.left:
                queue.enqueue(node.left)
                
            stack.push(node.value)
            
        return stack.elements()

if __name__ == "__main__":
    tree                 = Binary_Tree(1)
    tree.root.left       = Node(2)
    tree.root.right      = Node(3)
    tree.root.left.left  = Node(4)
    tree.root.left.right = Node(5)

    ans = tree.reverse_level_order(tree.root)
    print(ans)