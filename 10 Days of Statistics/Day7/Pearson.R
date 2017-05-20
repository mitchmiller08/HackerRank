# Enter your code here. Read input from STDIN. Print output to STDOUT

data <- read.table("stdin",header=F, skip=1)
dat <- t(data)
out <- cor(dat[,1],dat[,2])

cat(round(out,3))