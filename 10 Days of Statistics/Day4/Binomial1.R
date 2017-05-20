# Enter your code here. Read input from STDIN. Print output to STDOUT

a <- readLines(con <- file("stdin"), warn = FALSE)
close(con)
a <- strsplit(a, " ") 
a <- as.numeric(a[[1]])
p <- a[1]/ (a[2] + a[1])

sum = 0

for(i in 3:6){
    sum = sum + dbinom(i,size=6,prob=p)
}
sum <- round(sum,3)
cat(sum)