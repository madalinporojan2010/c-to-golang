package main

import (
	"fmt"
)

func main() {
    if 4 != 0 {
        if 2 != 0 {
            a = 4
        }
        if 2 > 3 {
            a = 4
        }
    }
    a = 4
    a = 4
    a = 4
    a := 4
    var b float
    if a > b {
        a = 5
    }
    for {
        if 1 > 3 {
            break
        }
        justATest("asdfs", "test", 23)
        a = 4 + 2 + 1
    }
    for i := 0; i < 4; i = i + 1 {
        for {
            if 1 > 3 {
                break
            }
            a = 4 + 2 + 1
        }
        if 4 != 0 {
            a = 4
            fmt.Printf("%d %s %d %d", 4, "test", 1, 2)
        }
        else if 4 != 0 {
            a = 5
            fmt.Printf("%d %s %d %d", 4, "test", 1, 2)
        }
        fmt.Printf("%d %s %d %d", 4, "test", 1, 2)
        fmt.Printf("%d %s %d %d", 4, "test", 1, 2)
    }
}