# Enter your code here. Read input from STDIN. Print output to STDOUT

# Import data

f <- file('stdin')
T <- suppressWarnings(readLines(f))
T <- strsplit(T, " ")

for (i in 1:length(T)){
    T[[i]] <- as.numeric(T[[i]])
}

# Quantile calculation

Q <- sort(T[[2]])
QL <- Q[Q < median(Q)]
QU <- Q[Q > median(Q)]

q1 <- median(QL)
q2 <- median(Q)
q3 <- median(QU)

# Print results

write(q1, stdout())
write(q2, stdout())
write(q3, stdout())