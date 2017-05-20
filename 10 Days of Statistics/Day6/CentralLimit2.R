# Enter your code here. Read input from STDIN. Print output to STDOUT

f <- file("stdin")
on.exit(close(f))
data <- suppressWarnings(readLines(f))
data <- strsplit(data," ")

max <- as.numeric(data[1])
n <- as.numeric(data[2])
avg <- as.numeric(data[3])
std <- as.numeric(data[4])

avgp <- n*avg
stdp <- sqrt(n)*std

out <- round(pnorm(max,mean=avgp,sd=stdp),4)
cat(out)