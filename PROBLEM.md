## Problem: Civil War

**Time Limit:** 2 seconds  
**Memory Limit:** 256 megabytes

---

**A long time ago in a galaxy far, far away...**

Civil war engulfs the Galaxy! The mighty **Republic**, defenders of peace and order, faces the relentless onslaught of the **Separatist Alliance**, whose mechanical legions seek to plunge the galaxy into chaos. Both sides prepare for one final confrontation — a calculated battle of attrition.

The **Republic** and the **Separatists** each have `n` armies. The Republic's army strengths are given in an array `A` of length `n`, and the Separatists' in an array `B` of length `n`.

The two sides engage in battle, taking turns attacking the **smallest** remaining army of the opponent with any of their own armies, starting with the **Separatists**.

### Rules of Engagement:

- The **attacker** selects any one of their own armies.
- The **defender** is the smallest remaining army of the opponent.
- The two armies battle:
  - The **smaller** of the two armies is destroyed.
  - The **stronger** army survives, but its strength is reduced by the strength of the destroyed army.

For example, if the smallest Republic army has strength `23` and the Separatists choose to attack with an army of strength `34`, then the Republic army is destroyed, and the attacking Separatist army’s new strength becomes `11` (`34 - 23`).

Note that if the attacking and defending armies both have the same strength, both the armies are destroyed. 

The battle continues until one or both sides have no armies left.

At the end:
- The side with **positive total remaining strength** is declared the **winner**.
- If both sides have non-positive total strength, the battle is considered a **draw**.

You are to determine:

> **How many pairs of indices** `(i, j)` such that $1\le i, j\le n$ exist where **swapping** $A_i$ and $B_j$ **results in a Republic victory**, assuming both sides follow the optimal strategy?

---

### Input

- The first line contains an integer `n` $ (1 \le n\le 2⋅10^5) $ — the number of armies on each side.
- The second line contains `n` integers $A_1, A_2, ..., A_n$ $(1\le Aᵢ\le 10^9)$ — the strengths of the Republic's armies.
- The third line contains `n` integers $B_1, B_2, ..., B_n$ $(1\le Bᵢ \le 10^9)$ — the strengths of the Separatists' armies.

---

### Output

- Print a single integer — the number of index pairs `(i, j)` such that swapping $A_i$ and $B_j$ results in a **Republic victory**.

---



### Example

#### Input
```
4
1 9 4 2
10 2 8 3
```

#### Output
```
6
```
#### Input
```
1
1
2
```

#### Output
```
1
```


#### Explanation

In the second test case, Try the only possible swap: `i = 1, j = 1`.

Thus `A = [2]` and `B = [1]`
- Separatists attack:
  - Republic's weakest army = 2, Separatist's only army is 1 → Separatist army is destroyed.
  Republic army's stength becomes `2-1 = 1`


Separatists have no armies left → battle ends → Republic wins (1 army left with strength 1) ✅

So, 1 valid swap.

### Note

- An army with **zero** strength is considered destroyed.
- Each side attacks **alternately**, starting with the Separatists.
- Both sides follow the **optimal strategy** (i.e., they always attack using the most advantageous choice available to them).
