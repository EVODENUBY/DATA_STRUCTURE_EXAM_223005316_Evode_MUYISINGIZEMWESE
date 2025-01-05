
import heapq  

class MedicationHeap:
    def __init__(self):
        self.heap = []

    def add_order(self, priority, order):
        heapq.heappush(self.heap, (priority, order))
        print(f"\nAdded order: '{order}' with priority {priority}.")

    def process_order(self):
        if not self.heap:
            print("\nNo orders to process.\n")
            return
        priority, order = heapq.heappop(self.heap)
        print(f"Processing order: '{order}' with priority {priority}.")

    def display_orders(self):
        if not self.heap:
            print("No orders in the heap.")
            return
        print("\tCurrent Medication Orders (Priority Queue)")
        print("\t-------------------------------------------")
        for priority, order in sorted(self.heap):
            print(f"Priority {priority}: {order}")


if __name__ == "__main__":
    print('\n\tWELCOME TO VIRTUAL HEALTH ASSISTANT')
    med_heap = MedicationHeap()
    
    med_heap.add_order(2, "Painkillers for patient A")
    med_heap.add_order(1, "Insulin for patient B")
    med_heap.add_order(3, "Antibiotics for patient C")

    print("\n")
    med_heap.display_orders()

    print("\n\tProcessing Orders:")
    print("\t-----------------")
    med_heap.process_order()
    med_heap.process_order()
    med_heap.process_order()
    med_heap.process_order()  
