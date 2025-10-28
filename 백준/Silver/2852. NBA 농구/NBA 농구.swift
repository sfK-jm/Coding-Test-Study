import Foundation

var scoreA = 0
var scoreB = 0
var leadTimeA = 0
var leadTimeB = 0
var previousTimeString = "00:00"

func timeInSeconds(_ timeString: String) -> Int {
    let time = timeString.split(separator: ":").map { Int($0)! }
    let minutes = time[0]
    let seconds = time[1]
    return minutes * 60 + seconds
}

func formatTime(totalSeconds: Int) -> String {
    let minutes = totalSeconds / 60
    let seconds = totalSeconds % 60
    
    return String(format: "%02d:%02d", minutes, seconds)
}

func updateLeadTime(_ leadTime: inout Int, from previousTime: String, to currentTime: String) {
    let diff = timeInSeconds(currentTime) - timeInSeconds(previousTime)
    leadTime += diff
}

let n = Int(readLine()!)!

for _ in 0..<n {
    let input = readLine()!.split(separator: " ")
    let teamNumber = Int(input[0])
    let timeString = String(input[1])
    
    if scoreA > scoreB {
        updateLeadTime(&leadTimeA, from: previousTimeString, to: timeString)
    } else if scoreB > scoreA {
        updateLeadTime(&leadTimeB, from: previousTimeString, to: timeString)
    }
    
    if teamNumber == 1 {
        scoreA += 1
    } else if teamNumber == 2 {
        scoreB += 1
    }
    
    previousTimeString = timeString
}

if scoreA > scoreB {
    updateLeadTime(&leadTimeA, from: previousTimeString, to: "48:00")
} else if scoreB > scoreA {
    updateLeadTime(&leadTimeB, from: previousTimeString, to: "48:00")
}

print(formatTime(totalSeconds: leadTimeA))
print(formatTime(totalSeconds: leadTimeB))

