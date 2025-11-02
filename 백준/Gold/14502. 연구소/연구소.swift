import Foundation

let nm = readLine()!.split(separator: " ")
    .map { Int($0)! }
let n = nm[0]
let m = nm[1]

var a = [[Int]]()
var safeArea = [[Int]]()
var virusArea = [[Int]]()
var result = 0

let dx = [0, 0, -1, 1]
let dy = [1, -1, 0, 0]

for i in 0..<n {
    a.append(readLine()!.split(separator: " ")
        .map{Int($0)!}
    )
    
    for j in 0..<m {
        if a[i][j] == 0 {
            safeArea.append([i, j])
        } else if a[i][j] == 2 {
            virusArea.append([i, j])
        }
    }
}

func getSafeAreaCount() -> Int {
    var queue = virusArea
    var head = 0
    var visited = Array(repeating: Array(repeating: false, count: m), count: n)
    
    for virus in virusArea {
        visited[virus[0]][virus[1]] = true
    }
    
    while head < queue.count {
        let current = queue[head]
        head += 1
        
        let y = current[0]
        let x = current[1]
        
        for i in 0..<4 {
            let ny = y + dy[i]
            let nx = x + dx[i]
            
            if ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == 1 {
                continue
            }
            
            if a[ny][nx] == 0 && !visited[ny][nx] {
                visited[ny][nx] = true
                queue.append([ny, nx])
            }
        }
    }
    
    var safeCount = 0
    for i in 0..<n {
        for j in 0..<m {
            if a[i][j] == 0 && !visited[i][j] {
                safeCount += 1
            }
        }
    }
    return safeCount
}

for i in 0..<safeArea.count {
    for j in 0..<i {
        for k in 0..<j {
            let wall1 = safeArea[i]
            let wall2 = safeArea[j]
            let wall3 = safeArea[k]
            
            a[wall1[0]][wall1[1]] = 1
            a[wall2[0]][wall2[1]] = 1
            a[wall3[0]][wall3[1]] = 1

            result = max(result, getSafeAreaCount())
            
            a[wall1[0]][wall1[1]] = 0
            a[wall2[0]][wall2[1]] = 0
            a[wall3[0]][wall3[1]] = 0
        }
    }
}

print(result)
