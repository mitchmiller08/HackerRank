# Enter your code here. Read input from STDIN. Print output to STDOUT

a <- readLines(con <- file("stdin"), warn = FALSE)
a <- strsplit(a," ") 
a <- as.numeric(a)

out <- dpois(a[2],lambda=a[1])

cat(round(out,3))