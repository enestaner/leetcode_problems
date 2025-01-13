# LEETCODE PROBLEMS

## EASY

#### 1. TWO SUM

Answer: Insert all elements to map. Check if it is in the map first or second time then add the result vector.

#### 217. CONTAINS DUPLICATE

Answer: First sort the array. Then check every element if the nearby element are same then return true.

#### 242. VALID ANAGRAM

Answer: First if the strings not same size return false. Then iterating elements of first string add each char to hash map then for the second one delete every char. If hash map's size is zero these are anagram otherwise not.

## MEDIUM

#### 36. VALID SUDOKU

Answer: 2 nested for loops and checking column, row and 9x9 block at the same time. If same char appears twice then return false.

#### 49. GROUP ANAGRAMS

Answer: Sort the string and add it to hash map. So if the anagram exists then add it inside of the related vector. If not add new vector.

#### 128. LONGEST CONSECUTIVE SEQUENCE

Answer: We will use priority queue to sort the nums. Then store the top of the queue and pop it. Then compare with new top if the difference is 1 then increase the temp value. If same value continue the loop, else reset the temp value.  

#### 238. PRODUCT OF ARRAY EXCEPT SELF

Answer: First we need to calculate product of the right and left sides of each element. Then while iterating just multiply left and right side of that element.

#### 271. ENCODE AND DECODE STRINGS

Answer: First add all strings to one string but after each string add '\0' value. While decoding iterate over the characters then if the characher is '\0' then add string to vector.

#### 347. TOP K FREQUENT ELEMENTS

Answer: First we build a hash map for calculate the each numbers' frequency. Then using priority queue we can take TOP K elements from it.

## HARD