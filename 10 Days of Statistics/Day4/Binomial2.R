# Enter your code here. Read input from STDIN. Print output to STDOUT

a <- readLines(con <- file("stdin"), warn = FALSE)
close(con)
a <- strsplit(a, " ") 
a <- as.numeric(a[[1]])
p <- a[1] / 100
n <- a[2]

out1 <- sum(dbinom(0:2, size=n, prob=p))
out2 <- sum(dbinom(2:10, size=n, prob=p))

out1 <- round(out1,3)
out2 <- round(out2,3)
cat(out1)
cat("\n")
cat(out2)