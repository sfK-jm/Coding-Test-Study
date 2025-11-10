import Foundation

let nm = readLine()!.split(separator: " ").map { Int($0)! }
let n = nm[0]
let m = nm[1]

var adj = Array(repeating: [Int](), count: n + 1)

var dp = Array(repeating: 0, count: n + 1)
var maxCount = 0

for _ in 0..<m {
    let ab = readLine()!.split(separator: " ").map { Int($0)! }
    let a = ab[0]
    let b = ab[1]
    adj[b].append(a)
}

func bfs(startNode: Int) -> Int {
    var visited = Array(repeating: false, count: n + 1)
    var queue = [Int]()
    var head = 0
    
    queue.append(startNode)
    visited[startNode] = true
    var count = 1
    
    while head < queue.count {
        let here = queue[head]
        head += 1
        
        for there in adj[here] {
            if !visited[there] {
                visited[there] = true
                queue.append(there)
                count += 1
            }
        }
    }
    return count
}

for i in 1...n {
    dp[i] = bfs(startNode: i)
    maxCount = max(maxCount, dp[i])
}

var result: [String] = []
for i in 1...n {
    if dp[i] == maxCount {
        result.append(String(i))
    }
}

print(result.joined(separator: " "))