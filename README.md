# Gangster_Dawood_problems

You are an Indian spy. Your have been assigned a mission to collect evidence about Gangster Dawood Ibrahim living in Pakistan. The exact location of Dawood's home is unknown. However, Dawood frequently visits houses of his relatives. You task is to setup a base for spying which is at the minimum distance from all his relative's houses.

However, there is a pre-condition that you can setup spying base only on a street already occupied by his relatives.

If two houses i and j are present on street si and sj then minimum distance between them is |si - sj|

# Input Format

The first line is T i.e., the number of test cases

Any subsequent line ti contains the number of relatives ri followed by their house street number sij

# Constraints

1 <= T <= 100

1 <= ri <= 100

1 <= sij <= ri

# Output Format

For each test case, the solution must print the street on which the spying base station must be located such that it is at the minimum total sum of distances from Dawood's relatives houses

# Sample Input 0

2
2 2 4
3 2 4 6
# Sample Output 0

2
4
# Sample Input 1

3
4 10 7 6 5
3 4 7 9
3 10 5 50
# Sample Output 1

6
7
10
