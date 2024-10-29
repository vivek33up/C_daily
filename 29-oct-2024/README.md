
Q.1) For this program, we need to ask the user to enter an integer value, referred to as "item." The program then checks if the item is non-zero. If it is, the program takes a variable called "prod," which starts at 1, and multiplies it by the item, updating the prod value with the result. If the item is zero, the multiplication is skipped, and prod remains at its original value of 1. In the end, the program prints out the current value of prod, ensuring that it only changes when the item is non-zero, while always providing a result.
Q.2)This program computes the absolute difference between two integers provided by the user, referred to as 'x' and 'y'. It begins by asking the user to input values for both 'x' and 'y'. Next, it evaluates whether 'x' is greater than or equal to 'y'. If this is the case, it calculates the difference as 'x - y', storing the result in 'y'. Conversely, if 'x' is less than 'y', the program determines the difference as 'y - x' and assigns this value to 'y'. In either situation, 'y' will contain the absolute difference between the two integers. The program concludes by displaying this difference, which is guaranteed to be non-negative.
Q.3)This program classifies a single integer input, 'x', as zero, negative, or positive, while also updating relevant counters or sums based on its value. It starts by initializing three variables: 'zero_count' (to track the number of zeroes), 'minus_sum' (to total negative values), and 'plus_sum' (to total positive values), all set to 0 initially.

Users are prompted to input a value for 'x', after which the program evaluates the value:

If 'x' is zero, it increases 'zero_count' by 1.
If 'x' is negative, it adds 'x' to 'minus_sum', updating the total of all negative numbers.
If 'x' is positive, it includes 'x' in 'plus_sum', updating the total of all positive numbers.
In the end, the program displays the current figures for 'zero_count', 'minus_sum', and 'plus_sum', indicating the count of zeros and the cumulative sums of positive and negative integers, respectively. This framework efficiently categorizes x while adjusting each variable accordingly.
