class Node :
    def __init__(self , data , next):
        self.data = data 
        self.next = next 

class LinkedList :
    def __init__(self):
         self.head = None 
    def push_front(self,data) :
        node = Node(data , self.head) 
        self.head = node 
        return 
    def push_back(self , data ) :
        if(self.head is None) :
            self.head = Node(data , None) 
            return
        itr = self.head 
        while itr.next:
            itr = itr.next   
        itr.next = Node(data , None)
    def display(self):
        s = ""
        itr = self.head 
        while itr :
            s += str(itr.data) + " --> "
            itr = itr.next
        s += "None"
        print(s)
    def append_valuues(self , data):
        for i in data : 
            self.push_back(i)
    def get_length(self) : 
        itr = self.head 
        count = 0 
        while itr:
            count +=1 
            itr = itr.next 
        return count
    def delete(self , index ):
        if index<0 or index>= self.get_length() :
            print("Invalid Index !!")
            return 
        count = 0 
        itr = self.head 
        while itr :
            if count == index-1 :
                itr.next = itr.next.next 
            itr = itr.next
            count+=1
    def insert(self ,index , data ) :
        if index<0 or index>= self.get_length() :
            print("Invalid Index ! ")
            return
        if index == 0 :
            self.push_front(data)
        count = 0 
        itr = self.head 
        while itr : 
            if count == index-1 :
                node = Node(data , itr.next)
                itr.next = node
                break
            itr = itr.next
            count=count+1 
    def insert_by_value(self , data1 , data2 ):
        itr = self.head
        while itr :
            if itr.data == data1 :
                itr.next = Node(data2 , itr.next)
                return 
            itr = itr.next
        print("Invalid Before Data !! ")
    def remove_by_value(self , data) :   
        if self.head.data == data:
            self.head = self.head.next
            return
        itr = self.head 
        while itr.next:
            if itr.next.data == data:
                itr.next = itr.next.next
                return 
            itr = itr.next
        print("Invalid Data given!!")
    def get_head(self):
        return self.head
    def set_head(self,head):
        self.head = head

def reverseLinkedList(head) :
    prev = None
    curr = head 
    while curr :
        next = curr.next 
        curr.next = prev
        prev = curr
        curr = next 
    return prev

if __name__ == "__main__" :
    llist = LinkedList() 
    llist.push_back(10)
    llist.push_back(20)
    llist.push_back(30)
    llist.push_back(40)
    llist.delete(3)
    llist.insert(0,1)
    llist.insert_by_value(1 , 2)
    llist.remove_by_value(2)
    llist.display()
    print(llist.get_length())
    head = reverseLinkedList(llist.get_head())
    llist.set_head(head)
    llist.display()
