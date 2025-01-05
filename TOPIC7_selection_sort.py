
def selection_sort(tasks):
    n = len(tasks)
    for i in range(n):
        min_index = i
        for j in range(i + 1, n):
            if tasks[j][0] < tasks[min_index][0]:
                min_index = j
        tasks[i], tasks[min_index] = tasks[min_index], tasks[i]
    return tasks

if __name__ == "__main__":
    print('\n\tWELCOME TO VIRTUAL HEALTH ASSISTANT\n')
    tasks = [
        (3, "Medication for patient A"),
        (1, "Critical Surgery for patient B"),
        (2, "Routine Checkup for patient C"),
        (4, "Physical Therapy for patient D\n")
    ]

    print("\tBefore Sorting (By Priority):")
    print('\t-----------------------------')
    for task in tasks:
        print(f"Priority {task[0]}: {task[1]}")
        
    sorted_tasks = selection_sort(tasks)

    print("\n\tAfter Sorting (By Priority):")
    print('  \t---------------------------')
    for task in sorted_tasks:
        print(f"Priority {task[0]}: {task[1]}")
