import Foundation

let dy = [-1, 0, 1, 0]
let dx = [0, 1, 0, -1]

var n = 0
var m = 0
var totalCycles = 0
var lastMeltCount = 0

var map: [[Int]] = []
var cheeseToMelt: [(y: Int, x:Int)] = []

func dfs(y: Int, x: Int, visited: inout [[Bool]]) {
    visited[y][x] = true
    
    if map[y][x] == 1 {
        cheeseToMelt.append((y: y, x: x))
        return
    }
    
    for i in 0..<4 {
        let ny = y + dy[i]
        let nx = x + dx[i]
        
        if ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx] { continue }
        
        dfs(y: ny, x: nx, visited: &visited)
    }
}


let nm = readLine()!.split(separator: " ")
    .map { Int($0)! }
n = nm[0]
m = nm[1]

for _ in 0..<n {
    let row = readLine()!.split(separator: " ").map { Int($0)! }
    map.append(row)
}

while true {
    var visited = Array(repeating: Array(repeating: false, count: m), count: n)
    
    cheeseToMelt.removeAll()
    
    dfs(y: 0, x: 0, visited: &visited)
    
    lastMeltCount = cheeseToMelt.count
    
    for cheese in cheeseToMelt {
        map[cheese.y][cheese.x] = 0
    }
    
    var flag = false
    
    for i in 0..<n {
        for j in 0..<m {
            if map[i][j] == 1 {
                flag = true
                break
            }
        }
        if flag { break }
    }
    
    totalCycles += 1
    
    if (!flag) { break }
}

print(totalCycles)
print(lastMeltCount)
