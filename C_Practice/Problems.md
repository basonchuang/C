# Coding Practice with Kick Start Seesion #1 - Kick Start 2022
### Sample Problem
> You have gathered N bags of candy and you want to distribute the candy amongst M kids. The i-th bag contains Ci pieces of candy. You want to make sure that every kid get the same amount of candy and that the number of pieces of candy they receive is the greatest possible. You can open each bag and mix all pieces of candy before distributing them to the kids.
How many pieces of candy will remain after you share the candy amongst kids, based on the rules described above?
<br>Input
<br>The first line of the input gives the number of test cases, T. T test cases follow.
Each test case consists of two lines. The first line of each test case contains two integers: integer N, the number of candy bags, and M, the number of kids.
The next line contains N non-negative integers C1,C2,…,CN representing array C, where the i-th integer represents the number of candies in the i-th bag.
<br>Output
<br>For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of candies that will remain if you divide candies between kids according to the rules described above.
<br>Limits
<br>Time limit: 40 seconds.
<br>Memory limit: 1 GB.
<br>Test Set 1
<br>1≤T≤100.
<br>1≤N≤105.
<br>1≤M≤104.
<br>0≤Ci≤1000, for all i from 1 to N.
<br>Sample
<br>Sample Input
<br>2
<br>7 3
<br>1 2 3 4 5 6 7
<br>5 10
<br>7 7 7 7 7
<br>Sample Output
<br>Case #1: 1
<br>Case #2: 5
<br>In Sample Case #1, we have N=7 bags of candy. In total we have 1+2+3+4+5+6+7=28 candies that we want to divide between M=3 kids. Every kid can get 9 pieces of candy, so 28−3×9=1 pieces of candy will remain.
<br>In Sample Case #2, we have N=5 bags of candy. In total we have 7+7+7+7+7=35 candies that we want to divide between M=10 kids. Every kid can get 3 pieces of candy, so 35−10×3=5 pieces of candy will remain.