You are given an array of integers nums and the head of a linked list. Return the head of the modified linked list after removing all nodes from the linked list that have a value that exists in nums.

 

Example 1:


Input: nums = [1,2,3], head = [1,2,3,4,5]

Output: [4,5]

Explanation:

<img width="652" height="107" alt="image" src="https://github.com/user-attachments/assets/c06e6156-f5a0-4226-90f8-144b204d64e6" />

Remove the nodes with values 1, 2, and 3.

Example 2:

Input: nums = [1], head = [1,2,1,2,1,2]

Output: [2,2,2]

Explanation:

<img width="788" height="108" alt="image" src="https://github.com/user-attachments/assets/5de4988b-757c-45dd-91ae-289aa865f682" />



Remove the nodes with value 1.

Example 3:

Input: nums = [5], head = [1,2,3,4]

Output: [1,2,3,4]

Explanation:

<img width="514" height="107" alt="image" src="https://github.com/user-attachments/assets/ebae61c4-dd4f-4e9d-b0ea-21e6035763f9" />



No node has value 5.

 

Constraints:

1 <= nums.length <= 105
1 <= nums[i] <= 105
All elements in nums are unique.
The number of nodes in the given list is in the range [1, 105].
1 <= Node.val <= 105
The input is generated such that there is at least one node in the linked list that has a value not present in nums.
