""" ALGORITHM FOR RECURSIVE BUBBLE SORT
    STEP 1: Get an array
    STEP 2: Pass the array into the function
    STEP 3: Iterate through the list
    STEP 4: Compare the adjacent pairs and swap them if they're not in the correct order
    STEP 5: Call the function recursively passing the array as the argument"""

    #CODE

def rec_bubble(array,length):
    if length != 0:

        for i in range(length-1):
                if array[i]>array[i+1]:
                    array[i],array[i+1]=array[i+1],array[i]
        rec_bubble(array,length-1)

array=[1,9,5,8,7,3,6]
length=len(array)
rec_bubble(array,length)
print(array)
