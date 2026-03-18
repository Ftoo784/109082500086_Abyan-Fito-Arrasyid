package main

import (
	"fmt"
	"math"
)

func main() {
	var cx1, cy1, r1 float64
	var cx2, cy2, r2 float64
	var x, y float64

	fmt.Scan(&cx1, &cy1, &r1)
	fmt.Scan(&cx2, &cy2, &r2)
	fmt.Scan(&x, &y)

	jarak1 := math.Sqrt((x-cx1)*(x-cx1) + (y-cy1)*(y-cy1))
	jarak2 := math.Sqrt((x-cx2)*(x-cx2) + (y-cy2)*(y-cy2))

	dalam1 := jarak1 <= r1
	dalam2 := jarak2 <= r2

	if dalam1 && dalam2 {
		fmt.Println("Titik di dalam lingkaran 1 dan 2")
	} else if dalam1 {
		fmt.Println("Titik di dalam lingkaran 1")
	} else if dalam2 {
		fmt.Println("Titik di dalam lingkaran 2")
	} else {
		fmt.Println("Titik di luar lingkaran 1 dan 2")
	}
}
