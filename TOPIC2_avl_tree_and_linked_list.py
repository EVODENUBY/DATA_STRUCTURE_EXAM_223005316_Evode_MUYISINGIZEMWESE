
class AVLNode:
    def __init__(self, key, name):
        self.key = key  
        self.name = name  
        self.height = 1
        self.left = None
        self.right = None


class AVLTree:
    def get_height(self, node):
        return node.height if node else 0

    def get_balance(self, node):
        return self.get_height(node.left) - self.get_height(node.right)

    def rotate_right(self, y):
        x = y.left
        T = x.right
        x.right = y
        y.left = T
        y.height = 1 + max(self.get_height(y.left), self.get_height(y.right))
        x.height = 1 + max(self.get_height(x.left), self.get_height(x.right))
        return x

    def rotate_left(self, x):
        y = x.right
        T = y.left
        y.left = x
        x.right = T
        x.height = 1 + max(self.get_height(x.left), self.get_height(x.right))
        y.height = 1 + max(self.get_height(y.left), self.get_height(y.right))
        return y

    def insert(self, root, key, name):
        if not root:
            return AVLNode(key, name)
        if key < root.key:
            root.left = self.insert(root.left, key, name)
        elif key > root.key:
            root.right = self.insert(root.right, key, name)
        else:
            return root  

        root.height = 1 + max(self.get_height(root.left), self.get_height(root.right))
        balance = self.get_balance(root)

        if balance > 1 and key < root.left.key:
            return self.rotate_right(root)
        if balance < -1 and key > root.right.key:
            return self.rotate_left(root)
        if balance > 1 and key > root.left.key:
            root.left = self.rotate_left(root.left)
            return self.rotate_right(root)
        if balance < -1 and key < root.right.key:
            root.right = self.rotate_right(root.right)
            return self.rotate_left(root)

        return root

    def in_order_traversal(self, root):
        if root:
            self.in_order_traversal(root.left)
            print(f"Patient ID: {root.key}, Name: {root.name}")
            self.in_order_traversal(root.right)


class LinkedListNode:
    def __init__(self, data):
        self.data = data
        self.next = None
        
class LinkedList:
    def __init__(self):
        self.head = None

    def add_appointment(self, appointment):
        new_node = LinkedListNode(appointment)
        if not self.head:
            self.head = new_node
        else:
            current = self.head
            while current.next:
                current = current.next
            current.next = new_node

    def display_appointments(self):
        current = self.head
        while current:
            print(f"Appointment: {current.data}")
            current = current.next


if __name__ == "__main__":
    print('\n\tWELCOME TO VIRTUAL HEALTH ASSISTANT\n')
    avl = AVLTree()
    root = None
    root = avl.insert(root, 101, "Evode MUYISINGIZE")
    root = avl.insert(root, 102, "Bernard NTWALI")
    root = avl.insert(root, 100, "Alice NKUSI")
    print("\tPatient Records (In-Order Traversal)")
    print("\t-------------------------------------")
    avl.in_order_traversal(root)

    print("\n")
    appointments = LinkedList()
    appointments.add_appointment("Blood Test at 10:00 AM")
    appointments.add_appointment("Doctor Consultation at 2:00 PM")
    appointments.add_appointment("Physical Therapy at 4:00 PM\n")
    print("\tAppointment Schedule")
    print("\t--------------------")
    appointments.display_appointments()
