# Search-algorithm

#Question 1: How many steps would it take to perform a linear search for the number 8 in the ordered array, [2, 4, 6, 8, 10, 12, 13]?
      We would have to do count comparison to find the key from index 0 so, in this case 
      8 ≠ 2
      8 ≠ 4
      8 ≠ 6
      8 = 8
      so, it took total of 4 comparison

 #Question 2: How many steps would binary search take for the previous example?
     
      It might take 1 step comapted to the 4 comparison above because with binary search the checkpoint starts with the middle element first and, in this case the middle number is 8. 8=8

#Question 3: What is the maximum number of steps it would take to perform a binary search on an array of size 100,000?
    
    Since it's a binry check and it starts in the middle we can cut the value/elemnts in half so it will go from 100,000 to 50k to 25k each time dividing it by 2 and get 1.53

    #Question 4: 
      The program will create an of 100,000 elemnts and does both linear and binary search. In this case binary search is much faster for large sorted arrays (the code is in a different file)

      #Question 5:
      For the randomized code search, it will check for elements randomly without repeating any index and stops wjen the key is found. 
      (the code is in a different file)
