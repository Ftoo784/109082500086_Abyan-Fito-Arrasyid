package main

import (
	"fmt"
	"math"
)

func main() {
	var x1, y1, r1 int
	var x2, y2, r2 int
	var x, y int

	fmt.Scan(&x1, &y1, &r1)
	fmt.Scan(&x2, &y2, &r2)
	fmt.Scan(&x, &y)

	d1 := math.Sqrt(float64((x-x1)*(x-x1) + (y-y1)*(y-y1)))
	d2 := math.Sqrt(float64((x-x2)*(x-x2) + (y-y2)*(y-y2)))

	inside1 := d1 <= float64(r1)
	inside2 := d2 <= float64(r2)

	if inside1 && inside2 {
		fmt.Println("Titik di dalam lingkaran 1 dan 2")
	} else if inside1 {
		fmt.Println("Titik di dalam lingkaran 1")
	} else if inside2 {
		fmt.Println("Titik di dalam lingkaran 2")
	} else {
		fmt.Println("Titik di luar lingkaran 1 dan 2")
	}
}