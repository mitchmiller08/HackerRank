# Enter your code here. Read input from STDIN. Print output to STDOUT

out1 <- round(pnorm(80,mean=70,sd=10,lower.tail=FALSE),4)*100
out2 <- round(pnorm(60,mean=70,sd=10,lower.tail=FALSE),4)*100
out3 <- round(pnorm(60,mean=70,sd=10),4)*100

cat(out1,"\n")
cat(out2,"\n")
cat(out3)