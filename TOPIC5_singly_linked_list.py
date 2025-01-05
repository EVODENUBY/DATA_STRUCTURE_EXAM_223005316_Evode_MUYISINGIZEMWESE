
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None

    def log_vital_sign(self, vital_sign):
        new_node = Node(vital_sign)
        if not self.head:
            self.head = new_node
        else:
            current = self.head
            while current.next:
                current = current.next
            current.next = new_node
        print(f"Logged vital sign: {vital_sign}")

    def display_vital_signs(self):
        if not self.head:
            print("No vital signs logged.")
            return
        current = self.head
        print("\tLogged Vital Signs")
        print('\t------------------')
        while current:
            print(f"-> {current.data}")
            current = current.next

    def delete_oldest_vital_sign(self):
        if not self.head:
            print("\nNo vital signs to delete.\n")
            return
        oldest = self.head.data
        self.head = self.head.next
        print(f"Deleted oldest vital sign: \n\t{oldest}")


if __name__ == "__main__":
    print('\n\tWELCOME TO VIRTUAL HEALTH ASSISTANT\n')
    vitals = SinglyLinkedList()
    
    vitals.log_vital_sign("Blood Pressure: 120/80 mmHg")
    vitals.log_vital_sign("Heart Rate: 75 bpm")
    vitals.log_vital_sign("Blood Sugar: 110 mg/dL")
    
    print("\n")
    vitals.display_vital_signs()

    print("\n")
    vitals.delete_oldest_vital_sign()
    print("\nUpdated Vital Signs")
    print('------------------')
    vitals.display_vital_signs()
