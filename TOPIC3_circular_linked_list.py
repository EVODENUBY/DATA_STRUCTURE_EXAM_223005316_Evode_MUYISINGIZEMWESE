

class CircularLinkedListNode:
    def __init__(self, data):
        self.data = data
        self.next = None

class CircularLinkedList:
    def __init__(self):
        self.head = None

    def add_reminder(self, reminder):
        new_node = CircularLinkedListNode(reminder)
        if not self.head:
            self.head = new_node
            new_node.next = self.head
        else:
            current = self.head
            while current.next != self.head:
                current = current.next
            current.next = new_node
            new_node.next = self.head

    def display_reminders(self, cycles=2):
        if not self.head:
            print("No reminders set.")
            return
        current = self.head
        count = 0
        print("\tMedication Reminders")
        print("\t--------------------")
        while count < cycles * self.size():
            print(f"Reminder: {current.data}")
            current = current.next
            count += 1

    def size(self):
        if not self.head:
            return 0
        count = 1
        current = self.head
        while current.next != self.head:
            current = current.next
            count += 1
        return count


if __name__ == "__main__":
    print('\n\tWELCOME TO VIRTUAL HEALTH ASSISTANT\n')
    reminders = CircularLinkedList()
    reminders.add_reminder("Take Blood Pressure Medication at 8:00 AM")
    reminders.add_reminder("Take Diabetes Medication at 12:00 PM")
    reminders.add_reminder("Take Vitamin D at 6:00 PM\n")
    
    reminders.display_reminders(cycles=3)
