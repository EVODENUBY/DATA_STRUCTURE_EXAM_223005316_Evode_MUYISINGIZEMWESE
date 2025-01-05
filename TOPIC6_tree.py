class TreeNode:
    def __init__(self, data):
        self.data = data
        self.children = []

    def add_child(self, child_node):
        self.children.append(child_node)

    def display_hierarchy(self, level=0):
        print("  " * level + self.data)
        for child in self.children:
            child.display_hierarchy(level + 1)
            
if __name__ == "__main__":
    print('\n\tWELCOME TO VIRTUAL HEALTH ASSISTANT\n')
    root = TreeNode("Healthcare System")
    
    department_1 = TreeNode("Cardiology")
    department_2 = TreeNode("Neurology")
    department_3 = TreeNode("Pediatrics")

    root.add_child(department_1)
    root.add_child(department_2)
    root.add_child(department_3)

    cardiology_1 = TreeNode("\tGeneral Cardiology")
    cardiology_2 = TreeNode("\tCardiac Surgery")
    neurology_1 = TreeNode("\tGeneral Neurology")
    neurology_2= TreeNode("\tbehavioral neurology")
    pediatrics_1 = TreeNode("\tPediatric Surgery")
    pediatrics_2= TreeNode("\tPediatric Pulmonology\n")

    department_1.add_child(cardiology_1)
    department_1.add_child(cardiology_2)
    department_2.add_child(neurology_1)
    department_2.add_child(neurology_2)
    department_3.add_child(pediatrics_1)
    department_3.add_child(pediatrics_2)
    
    print("\tHealthcare System Hierarchy:")
    print('\t----------------------------')
    root.display_hierarchy()

