# Enter your code here. Read input from STDIN. Print output to STDOUT

a <- readLines(con <- file("stdin"), warn = FALSE)
a <- strsplit(a," ") 
a <- as.numeric(unlist(a))

ca <- 160 + 40 * (a[1]+a[1]^2)
cb <- 128 + 40 * (a[2]+a[2]^2)

cat(round(ca,3),"\n")
cat(round(cb,3))