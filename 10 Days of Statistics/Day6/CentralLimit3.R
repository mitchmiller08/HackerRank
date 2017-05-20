# Enter your code here. Read input from STDIN. Print output to STDOUT

f <- file("stdin")
on.exit(close(f))
data <- suppressWarnings(readLines(f))
data <- strsplit(data," ")

n <- as.numeric(data[1])
avg <- as.numeric(data[2])
std <- as.numeric(data[3])
range <- as.numeric(data[4])
z <- as.numeric(data[5])

x <- z * std / sqrt(n)

cat(round(avg-x,4),"\n")
cat(round(avg+x,4))