# Enter your code here. Read input from STDIN. Print output to STDOUT

out1 <- round(pnorm(19.5,mean=20,sd=2),3)
out2 <- round(pnorm(22,mean=20,sd=2)-pnorm(20,mean=20,sd=2),3)

cat(out1,"\n")
cat(out2)