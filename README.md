# Project_Euler

## Problem 1
if we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below N.

### Contraints
- 1 < T < $10^5$
- 1 < N < $10^9$

### Explaination
Sum of all numbers between 1 and n can be denoted as:
$$\left( \sum_{k=1}^n \frac{n(n + 1}{n} \right)$$
There are $\frac{n}{3}$ between 1 and n that are divisible by 3. We can apply this model to 5 aswell. Therefore we can deduce that the sum of all multiples of any given integer can be represented as:
$$3  \left( \sum_{k=1}^n \frac{n}{3} \right)$$
From here we need to add the two sets (divisible by 3 and 5) and subtract the set that is divisible by 15 since they are all multiples of 3 and 5 and is not what we are looking for.<br> Q.E.D
  
### Explaination on others coming soon..
