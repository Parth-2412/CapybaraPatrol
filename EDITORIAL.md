## Editorial for Begun, the Clone Wars have

So we'll look at how victory is determined given two arrays of army strengths. A naive way would be to sit down and figure out the optimal strategy and simulate it for each swap.

However, we will now make an observation which renders any simulation of the battle useless.

- Observe that during each turn of attack, the **total sum of strengths** of the armies on each side decrease by the same amount. Let this decrease in the $i^{th}$ turn be $d_i$.
(This decrease is equal to the strength of the smaller army of the two involved in the turn.)

- Let's say the Republic wins, i.e after some amount of turns (say k) all of the Separatist armies are destroyed and the Republic army is left with atleast one standing army.

- Then $sum(B) - \sum_{n=1}^{k} d_i = 0$, since in each turn we have a decrease in the total strength of the Separatists as $d_i$ and the final total strength of the Separatists is 0.

- Whereas the total final strength of the Republic is still non-zero (> 0), therefore $sum(A) - \sum_{n=1}^{k} d_i > 0$
  
- This implies the only condition for the Republic to win $sum(A) > sum(B)$. Similarly, the only condition for the Separatists to win is $sum(A) < sum(B)$

- Note that whoever attacked first doesn't matter and the sequence of attacks doesn't matter as well. 
  
- $sum(A) = sum(B)$ implies a draw


Now we have a very simple condition (both sufficient and necessary) for victory.
And this problem boils down to simply calculating all pairs `(i,j)` such that on swapping $A_i$ and $B_j$ => $sum(A) > sum(B)$ is acheieved.

This can be done with a simple sorting of B, and then for each element of A (say $A_i$), applying a binary search on B, to find the smallest element of B (say $B_j$) we can swap such that $sum(A) > sum(B)$. 

- Note that all elements of B less than $B_j$ cannot be swapped with $A_i$ while still keeping $sum(A) > sum(B)$ (by definition of $B_j$). 
- Whereas all the elements of B $\ge$ $B_j$ can be swapped with $A_i$
while preserving the inequality. 
  - Since as we move to larger $B_j$ for the same $A_i$ we increase sum(A) and decrease sum(B)
- Therefore for each $A_i$, we find such $B_j$ and add $n-j+1$ to our answer



This problem showcases a particularly elegant dynamic: at first glance, it appears to demand careful simulation and strategy to determine the winner of a turn-based battle. One might spend considerable time analyzing attack orders and strength reductions. However, the key lies in a deceptively simple observation — that the necessary and sufficient condition for a Republic victory reduces to a single inequality between the total strengths of the two sides. For those who miss this, the problem can feel deeply complex and frustrating. Yet for those who catch it, the entire task collapses into a clean and efficient counting problem, making it feel trivial. This sharp divide in perceived difficulty underscores the beauty of the problem's design.



