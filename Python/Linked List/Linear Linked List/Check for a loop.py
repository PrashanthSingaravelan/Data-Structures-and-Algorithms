class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

# Creation of Linked List starts
class LinkedList:
    def __init__(self,list1):
        self.head=Node(list1[0])
    
    def Append(self,list1):
      last=Node(None)
      last=self.head
      
      for i in range(1,len(list1),1):
         t         = Node(list1[i])
         last.next = t
         last      = t               
# Creation of Linked List stops

    def Display(self):
     ptr=self.head
     while ptr!=None:
      print(ptr.data,end=" ")
      ptr = ptr.next
     
    def Count(self):
        a=self.head
        count=0
        while a:
            count=count+1
            a=a.next
        return count
    
# Used for creating a loop in the linked list
    def Shift(self,step1,step2):
        ptr=self.head
        qtr=self.head
        
        for i in range(step1+1):
           if i!=step1:
             ptr=ptr.next
        
        for i in range(step2):
           if i!=step2:
             qtr=qtr.next
                          # Now ptr = 40 and qtr =60
        qtr.next = ptr   # Loop linking is done over here
    

def CheckForLoop(obj1,count):
    ptr=qtr=obj1.head
    
# Can be done in dowhile loop that too in C,C++
    for i in range(count):
     if ptr!=None and qtr!=None:
         ptr=ptr.next   # ptr will move 1 step
         qtr=qtr.next   # qtr will move in 2 steps
         
         if qtr!=None: qtr=qtr.next   # useful if there is a loop
         else: qtr=qtr                # useful if there is no loop
         
         if ptr==qtr:   # At any point qtr will be equal to ptr 
             break      # Will come out of the for loop itself
             
    if ptr==qtr: print("Yes,There is a Loop")
    else:        print("No,There is no Loop")
    
    
list1=[20,30,40,50,60]

obj1=LinkedList(list1)
obj1.Append(list1)
count = obj1.Count()    # First Count the nodes and then make a linkp9952407524 777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777770000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000055555555555555555555555555
obj1.Shift(2,4)
CheckForLoop(obj1,count)



list2=[90,32,12,56,20]
obj2=LinkedList(list2)
obj2.Append(list2)
CheckForLoop(obj2,count)

