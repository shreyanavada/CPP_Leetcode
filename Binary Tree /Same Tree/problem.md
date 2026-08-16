Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

 

Example 1:

<img width="622" height="182" alt="image" src="https://github.com/user-attachments/assets/bf0c4e0e-c69c-4e64-9eed-f42f36395b35" />


Input: p = [1,2,3], q = [1,2,3]
Output: true

Example 2:

<img width="382" height="182" alt="image" src="https://github.com/user-attachments/assets/541bd31e-20f8-4aa6-9f8c-860ffa1fa456" />



Input: p = [1,2], q = [1,null,2]
Output: false

Example 3:

<img width="622" height="182" alt="image" src="https://github.com/user-attachments/assets/fb4bc731-31d7-4386-a454-a86ea223c8ba" />


Input: p = [1,2,1], q = [1,1,2]
Output: false
 

Constraints:

The number of nodes in both trees is in the range [0, 100].
-104 <= Node.val <= 104
