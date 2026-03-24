📊 Time Complexity of Common Sorting Algorithms
🔸 Merge Sort

Recurrence Formula:
T(n) = 2T(n/2) + O(n)

Applying Master Theorem:
a = 2, b = 2, f(n) = O(n)
⇒ n^(log₂2) = n

Since f(n) matches Θ(n^(log_b a)), it falls under Case 2

Overall Time Complexity:
✔ O(n log n) in all cases

🔸 Quick Sort

Best Case:
T(n) = 2T(n/2) + O(n)
✔ Balanced partitioning
✔ Time Complexity: O(n log n)

Worst Case:
T(n) = T(n-1) + O(n)
✔ Occurs when pivot is smallest/largest
✔ Time Complexity: O(n²)

Average Case:
✔ Random pivots lead to balanced splits
✔ Time Complexity: O(n log n)

🔸 Selection Sort

Total Comparisons:
T(n) = 1 + 2 + 3 + ... + (n-1)

Simplified Form:
T(n) = n(n-1)/2

Time Complexity:
✔ O(n²) for best, average, and worst cases
✔ No dependence on input order

🔸 Bubble Sort

Worst Case:
✔ Multiple passes required
✔ T(n) = (n-1) + (n-2) + ... + 1
✔ O(n²)

Average Case:
✔ O(n²)

Best Case (with optimization):
✔ Already sorted array
✔ O(n)

🔸 Insertion Sort

Worst Case:
✔ Reverse sorted array
✔ O(n²)

Average Case:
✔ O(n²)

Best Case:
✔ Nearly/already sorted input
✔ O(n)

✨ Important Observations
Merge Sort guarantees consistent O(n log n) performance
Quick Sort is fast in practice but sensitive to pivot choice
Insertion Sort works well for small or nearly sorted datasets
Bubble Sort is mainly used for learning purposes
Selection Sort performs a fixed number of comparisons every time

