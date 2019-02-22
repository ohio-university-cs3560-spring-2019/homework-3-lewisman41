filename = "file1.txt"
file = open(filename, "r")
lines = 0
words = 0
charac = 0
i = 1

for line in file:
	x = line.split()
	lines += int(x[0])
	words += int(x[1])
	charac += int(x[2])

print "lines: ", lines," words: ", words," characters: ", charac


