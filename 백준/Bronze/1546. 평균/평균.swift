let count = Double(readLine()!)!
let realScore = readLine()!.split(separator: " ").map { Double(String($0))! }
let maxScore = realScore.max()!
let fakeScore = realScore.map { $0 / maxScore * 100 }
var sum = 0.0
for i in fakeScore {
    sum += i
}
print(sum / count)