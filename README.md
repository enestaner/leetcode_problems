# LEETCODE PROBLEMS

## EASY

#### 1. TWO SUM

Answer: Insert all elements to map. Check if it is in the map first or second time then add the result vector.

#### 125. VALID PALINDROME

Answer: First check the chars of string. If it is between 'a'-'z' or '0'-'9' add it directly to temp string. If it is between 'A'-'Z' then add 32 to make this lower case according to ASCII table.

#### 217. CONTAINS DUPLICATE

Answer: First sort the array. Then check every element if the nearby element are same then return true.

#### 242. VALID ANAGRAM

Answer: First if the strings not same size return false. Then iterating elements of first string add each char to hash map then for the second one delete every char. If hash map's size is zero these are anagram otherwise not.

## MEDIUM

#### 15. 3SUM

Answer: First sort the array to use two pointer approach. After that iterate over array. Continue for duplicated nums. If the total zero add it to array then skip duplicates. If not either increase left pointer or decrease right pointer.

#### 36. VALID SUDOKU

Answer: 2 nested for loops and checking column, row and 9x9 block at the same time. If same char appears twice then return false.

#### 49. GROUP ANAGRAMS

Answer: Sort the string and add it to hash map. So if the anagram exists then add it inside of the related vector. If not add new vector.

#### 128. LONGEST CONSECUTIVE SEQUENCE

Answer: We will use priority queue to sort the nums. Then store the top of the queue and pop it. Then compare with new top if the difference is 1 then increase the temp value. If same value continue the loop, else reset the temp value.  

#### 167. TWO SUM II - INPUT ARRAY IS SORTED

Answer: We will use right and left pointer. If the total is equal the target return the indexes. If total less than target than increase the left pointer to increase the total. Otherwise, decrease the right pointer to decrease the total.

#### 238. PRODUCT OF ARRAY EXCEPT SELF

Answer: First we need to calculate product of the right and left sides of each element. Then while iterating just multiply left and right side of that element.

#### 271. ENCODE AND DECODE STRINGS

Answer: First add all strings to one string but after each string add '\0' value. While decoding iterate over the characters then if the characher is '\0' then add string to vector.

#### 347. TOP K FREQUENT ELEMENTS

Answer: First we build a hash map for calculate the each numbers' frequency. Then using priority queue we can take TOP K elements from it.

## HARD