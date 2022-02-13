package main

import (
	"fmt"
)

func main() {
	a := 7
	b := 1
	c := 3

	for i := 7; i >= 0; i = i-1 {
		if a%2==0 {
			a = a/2
			c = c*c
		} else {
			a = a-1
			b = b*c
		}
	}
	fmt.Println("3^7 = ", b)
}
