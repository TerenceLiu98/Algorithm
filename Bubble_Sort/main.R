vector <- runif(10, 1, 9)
vector <- round(vector)

BobbleSort <- function(x)
{
  n <- length(x) # better insert this line inside the sorting function
  for (k in n:2) # every iteration of the outer loop bubbles the maximum element 
                 # of the array to the end
  {
    i <- 1       
    while (i < k)        # i is the index for nested loop, no need to do i < n
                         # because passing j iterations of the for loop already 
                         # places j maximum elements to the last j positions
    {
      if (x[i] > x[i+1]) # if the element is greater than the next one we change them
      {
        temp <- x[i+1]
        x[i+1] <- x[i]
        x[i] <- temp
      }
      i <- i+1           # moving to the next element
    }
  }
 return(x)              # returning sorted x (the last evaluated value inside the body 
                 # of the function is returned), we can also write return(x)
}

BobbleSort(vector)
